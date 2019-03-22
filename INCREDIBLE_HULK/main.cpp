#include <iostream>

using namespace std;

int main()
{
    int n,t,i=1,c=0;
    cin>>t;
    int A[t];
    for(int k=0;k<t;k++)
        cin>>A[k];
    for(int k=0;k<t;k++)
    {
        c=0;
        n=A[k];
        while(n>1){
            int r=1<<i;
            if(r>n){
                c++;
                r=1<<(i-1);
                n=n-r;
                i=0;
            }
            i++;
        }
        if(n>0)
        c++;
        cout<<c<<endl;
    }
    return 0;
}
