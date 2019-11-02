#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << endl;
    int a[n], b[n];
    for(int i = 0; i<n; i += 1)
    {
        cin >> a[i];
    }
    cout << endl;
    for(int i = 0; i<n; i += 1)
    {
        cin >> b[i];
    }
    for(int i = 0; i<n; i += 1)
    {
        int t = a[i];
        a[i] = b[i];
        b[i] = t;
    }
    for(int i = 0; i<n; i += 1)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    for(int i = 0; i<n; i += 1)
    {
        cout << b[i] << " ";
    }
}
