#include<iostream>
using namespace std;

int countZeros(int num) {
    int count = 0;
    while (num >= 5) {
        count += num / 5;
        num /= 5;
    }
    return count;
}

int main() {
    int n;
    cout << "Enter how many trailing zeros you want: ";
    cin >> n;

    int i=5;
    int j=1;
    while (true) {
        if (countZeros(i*j)==n) {
            cout << "Smallest number is: " << i << endl;
            break;
            j++;
        }
        i++;
    }

    return 0;
}
