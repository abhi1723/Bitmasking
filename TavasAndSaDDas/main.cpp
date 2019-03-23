#include <iostream>

using namespace std;
int trace(int number,int searchThisNumber,int c){
int p=1,s=0,t;
int y=number;
while(number>0){
    int k=number&1;
    if(k)
        s=s+(p*7);
    else s=s+(p*4);
    p*=10;
    number=number>>1;
}
int mask=1<<(c-1);
if((y&mask)==0){
    s=s+(p*4);
}
if(c>2){

if(y==1 || y==0){
    p*=10;
    s=s+(p*4);
}
if(y==0)
{
    p*=10;
    s=s+(p*4);

}
}
if(s==searchThisNumber)
    {
        return (y+1);
    }
    else
        return -10001;
}
int main()
{
    int n;
    cin>>n;
    int p=n;
    int c=0;
    int f=-10001;
    while(p>0){
        p=p/10;
        c++;
    }
    int ranking=0;
     if(n==4)
        f=1;
    else if(n==7)
       f=2;
    else if(n==44)
    f=3;
    else {

    for(int i=1;i<c;i++){
        ranking+=(1<<i);
    }
    int totalNumbersWithSameNoOfDigitsAsInput=(1<<c);
    int range=totalNumbersWithSameNoOfDigitsAsInput-1;
    for(int i=0;i<=range;i++){
        f=trace(i,n,c);
        if(f!=-10001)
            break;
    }
    }
    ranking+=f;
    cout<<ranking;
    return 0;
}
