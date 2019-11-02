#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << endl;
    int a[n], indmin = 0, indmax = 0;
    for(int i = 0; i<n; i += 1)
    {
        cin >> a[i];
        if(a[i]<a[indmin])
        {
            indmin = i;
        }
        if(a[i]>a[indmax])
        {
            indmax = i;
        }
    }
    if(indmin<indmax)
    {
        for(int i = indmin+1; i<indmax; i += 1)
        {
            a[i] = 0;
        }
    }
    else
    {
        for(int i = indmax+1; i<indmin; i += 1)
        {
            a[i] = 0;
        }
    }
    for(int i = 0; i<n; i += 1)
    {
        cout << a[i] << " ";
    }
}
