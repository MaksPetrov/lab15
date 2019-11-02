#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << endl;
    int a[n], s = 0;
    for(int i = 0; i<n; i += 1)
    {
        cin >> a[i];
        if(a[i]%2!=0)
        {
            s = a[i];
        }
    }
    if(s==0)
    {
        for(int i = 0; i<n; i += 1)
        {
            cout << a[i] << " ";
        }
    }
    else
    {
        for(int i = 0; i<n; i += 1)
        {
            if(a[i]%2!=0)
            {
                a[i] += s;
            }
            cout << a[i] << " ";
        }
    }
}
