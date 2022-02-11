#include <iostream>
using namespace std;
void Euc(int expo,int n);
int main(){
    
    //gcd(13,2436)
    //2436=13.187+5  a=d.q+r
     Euc(13,42*58);

    return 0;
    
}

void Euc(int expo,int n){
    int a[20],d[20],q[20],r[20];
    a[0]=n;
    d[0]=expo; 

      int i=-1;
    do{
        ++i;
        r[i]=a[i]%d[i];
        q[i]=a[i]/d[i];
        cout<<a[i]<<" = "<<d[i]<<" . "<<q[i]<<" + "<<r[i]<<endl;
        a[i+1]=d[i];
        d[i+1]=r[i];

    }while(r[i]!=0);
    
}