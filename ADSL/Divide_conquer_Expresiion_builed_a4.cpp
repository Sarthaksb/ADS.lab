#include <iostream>
using namespace std;

char d[20];   // input digit characters
char e[50];   // expression being built
int n, t;     // number of digits, and target value

// Recursive function to build and evaluate expressions
void solve(int pos, int exprPos, long currVal, long lastVal) {
    if (pos == n) {
        if (currVal == t) {
            e[exprPos] = '\0';   // null-terminate expression
            cout << e << endl;   // print expression
        }
        return;
    }

    long num = 0;
    int startExprPos = exprPos;

    for (int i = pos; i < n; i++) {
        num = num * 10 + (d[i] - '0');

        // Append current digits to expression
        for (int j = pos; j <= i; j++) {
            e[exprPos++] = d[j];
        }

        if (pos == 0) {
            // First number (no operator before it)
            solve(i + 1, exprPos, num, num);
        } else {
            // Try +
            e[startExprPos] = '+';
            solve(i + 1, exprPos, currVal + num, num);

            // Try -
            e[startExprPos] = '-';
            solve(i + 1, exprPos, currVal - num, -num);

            // Try *
            e[startExprPos] = '*';
            solve(i + 1, exprPos, currVal - lastVal + lastVal * num, lastVal * num);
        }

        exprPos = startExprPos;  // backtrack

        if (d[pos] == '0') break;  // avoid numbers with leading 0
    }
}

int main() {
    cout << "Enter digits (e.g., 123): ";
    cin >> d;

    cout << "Enter target: ";
    cin >> t;

    // Count number of digits
    n = 0;
    while (d[n] != '\0') n++;

    solve(0, 0, 0, 0);

    return 0;
}