#include <stdio.h>
int main(){
int n;
printf("Nhap so luong phan tu trong mang:");
scanf("%d", &n);
int arr[n];
for(int i=0;i<n;i++){
printf("Nhap phan tu trong mang thu %d:", i+1);
scanf("%d", &arr[i]);
}
int pos;
printf("Nhap vi tri muon xoa trong mang:");
scanf("%d", &pos);
for(int i = pos; i < n-1; i++){
arr[i] = arr[i+1];
}
n--;
for(int i = 0; i < n; i++){
printf("%d ", arr[i]);}
}