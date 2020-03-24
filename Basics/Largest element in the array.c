#include<stdio.h>
int main(){
    int i,n;
    float array[100];
    printf("Enter the array size : ");
    scanf("%d", &n);
    for(i = 0; i < n; ++i){
        printf("Enter number %d: ", i + 1);
        scanf("%f", &array[i]);
    }
    for(i = 1; i < n; ++i){
        if (array[0] < array[i])
            array[0] = array[i];
    }
    printf("Largest element in the array is %.2f", array[0]);
    return 0;
}
