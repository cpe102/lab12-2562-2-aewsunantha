#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double []);

int main()
{
    double A[] = {1.2,-3.5,6.9,7.8,12.5,-0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[4];
    stat(A,N,B);
    cout << "Average = " << B[0];
    cout << "\nS.D. = " << B[1];
    cout << "\nMax = " << B[2];
    cout << "\nMin = " << B[3];
    return 0;
}

//Write definition of stat() here 
void stat(const double x[],int y,double z[]){
    double max=0,min=0,C=0,xx=0,avg,n;
    n=y;
    for(int i=0;i<y;i++)C+=x[i];
        avg=C/y;
        z[0]=avg;
       
    for(int i=0; i<y;i++) xx+= pow(x[i],2);
        z[1]=sqrt(((1/n)*xx)-(pow(avg,2)));
            
        
        
       for(int i=0; i<y;i++){
           if(x[i]>max) max=x[i];
          z[2]=max;
      
       }

  for(int i=0; i<y;i++){
          
           if(x[i]<min || i==0) min=x[i];
           z[3]=min;
       }


}