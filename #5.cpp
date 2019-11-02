#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << endl;
    int a[n];
    for(int i = 0; i<n; i += 1)
    {
        cin >> a[i];
    }
    for(int i = 1; i<n; i += 1)
    {
        if(a[i-1]>a[i])
        {
            int t = a[i-1];
            a[i-1] = a[i];
            a[i] = t;
        }
    }
    for(int i = 0; i<n; i += 1)
    {
        cout << a[i] << " ";
    }
}
