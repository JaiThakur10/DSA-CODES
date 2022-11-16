#include<iostream>
using namespace std;

int main(){

    int arr[5]={1,2,3,4,5};
    int num;
    int i,j,k;
    cout<<"Enter number"<<endl;
    cin>>num;

    for(int i = 0; i<5; i++){
        for(int j=i+1; j<5; j++){
            for(int k=j+1; k<5; k++){
                if(arr[i]+arr[j]+arr[k] == num){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                    break;
                }
            }
        }
    }
    if(arr[i]+arr[j]+arr[k] != num){
        cout<<"No such triplet found which adds up to "<<num<<endl;
    }
    return 0;
}