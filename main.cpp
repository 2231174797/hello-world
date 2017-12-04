#include<iostream>
#include<math.h>
#include<fstream>
using namespace std;
double f1x(double x){
  return -sin(x);
}
double fx(double x){
  return cos(x);
}
int main(){
    double b=0;
    double a=0;
    double n=0;
    double sum=0;
    cout<<"Dame el limite superior_"<<b<<endl;
    cin>>b;
    cout<<"Dame el limite inferior_"<<a<<endl;
    cin>>a;
    cout<<"Dame el numero de particiones_"<<n<<endl;
    cin>>n;
    for(double i=0;i<=n;i++)
{
    sum=((b-a)/n)*(sin(i))+sum;
}
cout<<"el area bajo la curva numerica es_"<<sum<<endl;
cout<<"el area bajo la curva directa es_"<<cos(b)-cos(a)<<endl;
return 0;
}

