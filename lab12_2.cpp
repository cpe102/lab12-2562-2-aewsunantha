#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "\nInput your brush size and location:";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 && x != 0 && y != 0 );
             return 0;    
}

// Write definition of updateImage() and showImage() here
void updateImage(bool A[][M],int b,int c,int d){
  
   for(int i=0;i<N;i++){
     for(int j=0; j<M; j++){
     	
          if(A[i][j]==1)continue;
          
		  if(sqrt(pow(i-c,2)+pow(j-d,2)) <= b-1) A[i][j]=1;
          else A[i][j]=0;
}        
   }
}
void showImage(const bool B[][M]){
    for(int i=1; i<72; i++)
     cout<<"-";


    for(int i=0;i<N;i++){

        cout<<"\n|";
        for(int j=0;j<M; j++){
        
    if(B[i][j]==1)cout<<'*';
      else cout<<" ";
         
        }
        cout<<"|";
    }
    
    cout<<"\n";

 for(int i=1; i<72; i++)
     cout<<"-";
}




