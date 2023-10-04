#include<bits/stdc++.h>
using namespace std;
int main(){
      int size=3;
      long long sample[size];
      for(int i=0; i<size; i++){
            cin>>sample[i];
      }
      long long max=sample[0];
      long long min=sample[0];
      for(int i=0; i<size; i++){
            if(max<sample[i]){
                  max = sample[i];
            }
            if(min>sample[i]){
                  min = sample[i];
            }
      }
      cout<<min<<" "<<max;
}