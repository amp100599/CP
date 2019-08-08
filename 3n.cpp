#include <iostream>
using namespace std;

int main(){
  unsigned int i,j,cl,ml;
  while(cin >>i >>j){
  cl=0;
  ml=0;
  for(int k=i;k<=j;k++){
    cl=0;
    int k1=k;
    while(k1 !=1 ){
      if(k1%2==1){
        k1=3*k1+1;
        cl++;
      }
      else{
        k1=k1/2;
        cl++;
      }
    }
      cl++; //for including last count of 1 in every series
      if(cl >ml){
        ml = cl;
      }
    }
    cout << i << " " << j << " " << ml << endl;
}
return 0;
}
