#include<iostream>
int main(){
      int w,a,b;
      std::cin>>w;

      w==a+b;
      if(w==2){
            std::cout<<"No";
      }

      else if(w%2==0){
            if(a%2==0 || b%2==0){
                  std::cout<<"Yes";
            }
      }
      else{
                  std::cout<<"No";
            }
      
}