#include <iostream>

using namespace std;

int main()
{
    int A[]={5,2,6,9,2,5,6};
    int p=A[0]^A[1];
    for(int i=2;i<sizeof(A)/sizeof(int);i++)
    {
        p=p^A[i];
    }
    cout<<p;
    return 0;
}
