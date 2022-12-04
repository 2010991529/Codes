#include<iostream>
using namespace std;
int check(int arr[],int n){

    if(n==1){
        return 1;
    }
    if(arr[n-1]>=arr[n-2]){
        return check(arr,n-1);
    }
    else{
        return 0;
    }
}

int main(){
    int arr[] = { 1 , 2 , 3 , 4 , 5 };
    int n = sizeof(arr)/sizeof(arr[0]);
    if(check(arr,n)){
        cout<<"Sorted🥰";
    }
    else{
        cout<<"Not Sorted🥴";
    }
    
    return 0;
}

//RECURSIVE SORT IS THE MOST IMPORTANT SORT FOR DEVANSHI AND THATS IT FOR TODAY 
