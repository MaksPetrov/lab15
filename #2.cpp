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
    float b[n], s = 0;
    for(int i = 0; i<n; i += 1)
    {
        s += a[i];
        b[i] = s/(i+1);
    }
    for(int i = 0; i<n; i += 1)
    {
        cout << b[i] << " ";
    }
}
