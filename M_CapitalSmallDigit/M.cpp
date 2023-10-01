#include<bits/stdc++.h>
using namespace std;
int main(){

      char value;
      cin>>value;
      for(int i=48; i<=122; i++){
            
                 char value1 = static_cast<char>(i);
                 if(i>=48 && i<=57){
                 if(value1 == value){
                  cout<<"IS DIGIT"<<endl;
                 }
                 }
                 else if((i>=65 && i<=90)||(i>=97 && i<=122)){
                  if(value1 == value){
                  cout<<"ALPHA"<<endl;
                 }
                 }
                 if(i>=65 && i<=90){
                  if(value1 == value){
                        cout<<"IS CAPITAL"<<endl;
                  }
                 }
                  else if(i>=97 && i<=122){
                        if(value1 == value){
                        cout<<"IS SMALL"<<endl;
                  }
                  }
            }
      }