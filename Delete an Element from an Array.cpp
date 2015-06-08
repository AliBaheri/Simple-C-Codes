#include <iostream>

using namespace std;

int main()
{
    int a[100],i,n,position;
    cout << "Enter the length of string: ";
    cin >> n;
    for (i=0;i<n;i++)
        cin >> a[i];
    cout << "enter the location where you wish to delete: " << endl;
    cin >> position;
    if (position >= n+1)
        cout << "deletion is not possible";
    else
        for (i=position-1;i<n-1;i++)
        a[i] = a[i+1];
    for (i=0;i<n-1;i++)
        cout << " " << a[i];

    return 0;
}
