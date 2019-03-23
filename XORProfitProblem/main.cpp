#include <iostream>

using namespace std;

int main()
{
    int x,y,maximum=0;
    cin>>x>>y;
    for(int i=x;i<=y;i++){
        for(int j=i+1;j<=y;j++){
             int z=i^j;
             if(z>maximum)
                maximum=z;
        }
    }
    cout<<maximum;
    return 0;
}
