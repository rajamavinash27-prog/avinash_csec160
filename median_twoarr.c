#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr1[n],arr2[m];
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<m;i++){
        scanf("%d",&arr2[i]);
    }
    int arr3[n+m];
    for(int i=0;i<n;i++){
        arr3[i]=arr1[i];
    }
    for(int i=0;i<m;i++){
        arr3[n+i]=arr2[i];
    }
    for (int i = 0; i < n+m - 1; i++) {
    int min = i;
    for (int j = i + 1; j < n+m; j++) {
        if (arr3[j] < arr3[min])
            min = j;
    }

    int temp = arr3[i];
    arr3[i] = arr3[min];
    arr3[min] = temp;
}
    if((n+m)%2==0){
        printf("%d",((arr3[(n+m)/2]+arr3[((n+m)/2)-1])/2));
    }else{
        printf("%d",arr3[(n+m-1)/2]);
    }
    return 0;
}