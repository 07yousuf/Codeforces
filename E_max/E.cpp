#include<bits/stdc++.h>
using namespace std;
int main(){
      int size;
      cin>>size;
      long long sample[size];
      for(int i=0; i<size; i++){
            cin>>sample[i];
      }
      long long max=sample[0];
      for(int i=0; i<size; i++){
            if(max<sample[i]){
                  max = sample[i];
            }
      }
      cout<<max;
}