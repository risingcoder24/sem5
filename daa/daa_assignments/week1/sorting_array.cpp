#include <iostream>
#include <bits/stdc++.h>
#define NA -1

using namespace std;

void sortedArray(int a[], int b[], int n, int m){
    int i = n - 1;
    int j = m - 1;

    int lastIndex = n + m - 1;

    while(j>=0){

        if(i>=0 && a[i] > b[j]){

            a[lastIndex] = a[i];
            i--;

        }

        else {
            a[lastIndex] = b[j];
            j--;
        }

        lastIndex--;
    }
}

void printArray(int *arr, int n){
    cout<< "Array A after merging B in sorted form"
    " order : " <<endl;

    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
}


int main(){
    int a[]={6,20,22,28,30,NA,NA,NA,NA};
    int n=5;
    int size_a=10;
    int b[] = {7,8,3,5,9};
    int m = 5;
    sortedArray(a,b,n,m);
    printArray(a, size_a);
    return 0;
}