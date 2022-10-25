#include<bits/stdc++.h>
using namespace std;
int max(int a[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}
int min(int a[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    return min;
}
int main(){
    int a[10]={1,2,3,4,-1,6,7,5,9,0};
   cout<<"Max:"<<max(a,10)<<endl;
   cout<<"Min:"<<min(a,10)<<endl;
    
    return 0;
}