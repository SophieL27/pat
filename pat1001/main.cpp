#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int k=0;
    while(n!=1)
    {
        if(n%2==0)
        {
            n=n/2;
            k++;
        }
        else
        {
            n=(3*n+1)/2;
            k++;
        }
    }
    cout<<k<<endl;
    return 0;
}
