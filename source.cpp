#include<stdio.h>

void print(int a[], int n){
    for(int i = 0; i< n; i++)
    {
        printf(" %d ",a[i]);
    }
    printf("\n");
}

void swap(int a[], int j, int i, int *SwapCount)
{
    int tempt = a[i];
    a[i] = a[j];
    a[j] = tempt;
    (*SwapCount)++;
}                                                                         

void interchange_sort(int a[], int n, int *SwapCount){
    for(int i = 0; i <n-1; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(a[i] > a[j]){
               swap(a, i, j, SwapCount);            
                }
        }
    }

}

int main(){
    int a[]={3, 9, 5, 7, 34, 12, 14};
    int n = sizeof(a) / sizeof(int);
    int SwapCount = 0;
    interchange_sort(a, n, &SwapCount);
    //bubble_sort(a, n);
    //selection_sort(a, n);
    //insertion_sort(a, n);
    print(a, n);
    printf("So lan doi cho la: %d", SwapCount);
    return 0;
}
