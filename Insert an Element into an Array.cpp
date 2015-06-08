#include <iostream>

using namespace std;

int main()
{
    int a[100];
    int i,n,value,position;
    cout << "Enter the number of element: " << endl;
    cin >> n;
    for (i=0;i<n;i++){
        cin >> a[i];
    }
    cout << "Enter the value of the new element: " << endl;
    cin >> value;
    cout << "Enter the position of the new element: " << endl;
    cin >> position;
    for (i=n;i>=position-1;i--){
        a[i+1] = a[i];
    }
    a[position-1] = value;
    for (i=0;i<=n;i++)
        cout <<" " << a[i];

    return 0;
}
