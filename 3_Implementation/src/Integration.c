#include<math.h>
double f(double x){
  return x*x;
}
double integration(int n ,double a ,double b){
  double h ,x , sum=0 , integral;
  h=fabs(b-a)/n;
  for(int i=1;i<n;i++){
    x=a+i*h;
    sum=sum+f(x);
  }
  integral=(h/2)*(f(a)+f(b)+2*sum);
   return integral;
}
