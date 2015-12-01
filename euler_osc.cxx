#include <iostream>
#include <cmath>

using namespace std;

int main(){
  
  const double dt=M_PI/100.0;
  const int N=20*M_PI/dt;
  int m=2, n=2;
  
  double p[n], d[m]; //p für Euler forward, d für backward
  double x;
  double t=0;
  
  
  p[0]=1; 
  d[0]=1;
  p[1]=0;
  d[1]=0;
  
  cout << t << "\t" << p[0] << "\t" << d[0] << "\t" << endl;
  
  for (int i=0; i<N; i++){
    t+=dt;
    
    x=p[0];
    p[0]=p[0]+p[1]*dt;
    p[1]=p[1]-x*dt;
    
    d[0]=(d[0]+d[1]*dt)/(1+(dt*dt));
    d[1]=d[1]-d[0]*dt;
    
    cout << t << "\t" << p[0] << "\t" << d[0] << "\t" << endl;
    
  }
  
  return(0);
  
}
    
  
  
  
 
