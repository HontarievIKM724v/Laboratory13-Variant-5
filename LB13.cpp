#include <iostream>

using namespace std;


int func(int n);

int main()
{
    cout << "Enter the position of the term in the sequence to calculate: ";
    int n = 0;
    cin >> n;
    if (n < 1 || n > 10) cout << "\nPlease enter a number between 1 and 10";
    else cout << "\nThe term number" << n << "is: " << func(n) << endl;

}


int func(int n) {
    if (n == 1) return 2;
    else return func(n - 1) + 2;
            
}

