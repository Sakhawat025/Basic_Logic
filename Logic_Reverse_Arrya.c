
#include<stdio.h>

void reverseArray(int A[],int n)
{
    int start=0;
    int end=n-1;
    int temp;
    while (start<end){
        temp=A[start];
        A[start]=A[end];
        A[end]=temp;
        start++;
        end--;
    }
}

int main()
{
    int n,i;
    scanf("%d",&n);
    int A[n];

    for(i=0;i<n;++i){
        scanf("%d",&A[i]);
    }

    reverseArray(A,n);

    printf("Reverse Order.\n");

    for(i=0;i<n;++i){
        printf("%d ",A[i]);
    }

    return 0;


}

/*int main()
{
    int n;
    scanf("%d",&n);
    int A[10];
    int i;
    for(i=0;i<n;++i){
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;++i){
        printf("%d ",A[i]);
    } printf("\n");
    printf("Reverse Order.\n");

    for(i=n-1;i>=0;--i){
        printf("%d ",A[i]);
    }

    return 0;

}*/

