#include <iostream>

using namespace std;

int main()
{
    float a[1000];
    int i,n,c,d,t;
    cout << "Enter the length of array" << endl;
    cin >> n;
    for (i=0;i<=n-1;i++)
        cin >> a[i];

    for (d=1;d <= n-1;d++){
        c = d;
        while (c>0 && a[d] < a[d-1]){
            t= a[d];
            a[d] = a[d-1];
            a[d-1] = t;
            c--;
        }
    }
      for (i=0;i<=n-1;i++)
      cout << " " << a[i];
    return 0;
}
