#include <iostream>

using namespace std;
//getIthBitOfNumber
int getIthBitOfNumber(int n,int i){
return (n&(1<<i)!=0?1:0);
}
int main()
{
    int n,i;
    cin>>n>>i;
    int ithBit=getIthBitOfNumber(n,i);
    cout<<ithBit;
    return 0;
}
