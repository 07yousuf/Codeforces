#include<iostream>
#include<string>
using namespace std;
int main(){
      int n,i,sum=0,length;
      cin>>n;
      string word;

      for(i=0; i<n; i++){
            //std::cin>>word[100];
            cin>>word;
            length=word.length();
      if(length<=10){
            cout<<word<<endl;
      }
      else{
          cout<<word[0]<<length-2<<word[length-1]<<endl;
      }
      }
}