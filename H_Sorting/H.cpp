#include<bits/stdc++.h>
using namespace std;
int main(){
      int size;
      cin>>size;
      int sample[size];
      for(int i=0; i<size; i++){
            cin>>sample[i];
      }
      int temp;
      for(int i=0; i<size-i; i++){
            for(int j=0; j<size-i-1; j++){
                  if(sample[j]>sample[j+1]){
                  temp=sample[j];
                  sample[j] = sample[j+1];
                  sample[j+1] = temp;
                  }
            }
      }
      for(int i=0; i<size; i++){
            cout<<sample[i]<<" ";
      }
}


