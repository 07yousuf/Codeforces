#include<iostream>
using namespace std;
int main(){
      int n,i,j,implmnt=0,ques[1000][1000];
      cin>>n;
      for(i=1; i<=n; i++){
            for(j=1; j<=3; j++){
                  cin>>ques[i][j];
            }
      }
      for(i=1; i<=n; i++){
            int sum=0;
            for(j=1; j<=3; j++){
                  if(ques[i][j]<0 || ques[i][j]>1){
                  cout<<"Irelavent input"<<endl<<"please take input: 0<= n =<1";
                  return 0;
            }
                  sum+=ques[i][j];
            }
            if(sum>=2){
                  implmnt++;
            }
      }
      cout<<implmnt;
}