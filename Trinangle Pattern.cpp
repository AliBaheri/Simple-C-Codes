#include <iostream>

using namespace std;

int main()
{
    int c,i,n,temp,row;
    cout << "Enter the number of rows: " << endl;
    cin >> n;
    temp = n;
    for (row=1; row <= n; row++){
        for (c=1; c < temp; c++)
        cout << " ";
        temp--;
    for (c=1;c <= 2*row-1;c++)
        cout << "*";

        cout << "\n";
    }
    return 0;
}
