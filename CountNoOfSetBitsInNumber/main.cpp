#include <iostream>

using namespace std;
int countNoOfSetBits(int n){
int c=0;
while(n>0){
    c+=(n&1);
    n=n>>1;
}
return c;
}
int main()
{
    int n;
    cin>>n;
    int noOfSetBits=countNoOfSetBits(n);
    cout<<noOfSetBits;
    return 0;
}
