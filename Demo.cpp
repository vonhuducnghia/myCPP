#include <iostream>
using namespace std;
void merge(int a[], int l , int m , int r){
    int i,j,k = l;
    int n1 = m - l + 1;
    int n2 = r - m;

    int *L = new int[n1];
    int *R = new int[n2];
    
    for(i = 0; i<n1; i++){
        L[i] = a[l+i];
    }
    for(j = 0; j<n2; j++){
        R[j] = a[m + i +1];
    }
    i = 0, j = 0;
    while(i<n1 && j<n2){
        a[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
    }
    while(i<n1){
        a[k++] = L[i++];
    }
    while(j<n2){
        a[k++] = R[j++];
    }
}
void mergeSort( int a[], int l, int r){
    if(l<r){
        int m = l + (r-1)/2;
        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);
        merge(a,l,m,r); 
        
    }
}
void xuat(int a[], int n){
    for( int i = 0; i < n; i++){
        cout << a[i];
    }
}
int main(){
    int a[] = {2,3,6,5,4,0,1,9,8,7,5,2};
    int length = sizeof(a)/sizeof(int);
    mergeSort(a, 0, length - 1);
    xuat(a, length);
    return 0;
}