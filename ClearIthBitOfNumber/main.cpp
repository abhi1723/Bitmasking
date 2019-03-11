#include <iostream>

using namespace std;
int setIthBitOfNumber(int n,int i){
int mask_temp=1<<i;
int mask=~mask_temp;
int newNumber=n&mask;
return newNumber;
}
int main()
{
    int n,i;
    cin>>n>>i;
    int newNumber=setIthBitOfNumber(n,i);
    cout<<newNumber;
    return 0;
}
