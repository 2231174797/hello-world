#include <iostream>
using namespace std;
int main()
{
int S=12;
int p;
cout<<"Dame un numero_"<<endl;
  cin>>p;
  if(p%2==0)
    p=p+1;
    for(int i=2; i<=(p/2);i++)
    if(p%i==0)
    p=p+2;
    if(p<S)
    S=S-p;
    else
    S=S-1;
    if(S=0)
    cout<<"tu numero final es"<<p<<endl;
    else
    p=p+2;
    cout<<"tu numero es"<<p<<endl;
    return 0;
}



