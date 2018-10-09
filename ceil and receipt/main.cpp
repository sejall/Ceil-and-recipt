#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int i,p,r=0;
        cin>>p;
        for(i=2048;i>=1;i/=2)
        {
            r=r+p/i;
            p=p%i;
        }
        cout << r << endl;
    }
    return 0;
}
