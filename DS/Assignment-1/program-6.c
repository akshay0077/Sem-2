#include <stdio.h>
#include <stdlib.h>
#define size 5

int main(){
    int arr[size],R=-1,f=0,te=0,ch,n,i,x;

    while(1){
        printf("f=%d R=%d\n",f,R);
        printf("1. Add Rear\n");
        printf("2. Delete Rear\n");
        printf("3. Add Front \n");
        printf("4. Delete Front\n");
        printf("5. Display\n");
        printf("6. exits\n");
        printf("Enter Choice \n");
        scanf("%d",&ch);

        switch(ch){
        case 1:
            if(te==size){
                printf("Queue is full\n");
            }else{
                printf("Enter the Number\n");
                scanf("%d",&n);
                R=(R+1)%size;
                arr[R]=n;
                te+=1;
            }
            break;
        case 2:
            if(te==0){
                printf("Queue is Empty\n");
            }else{
                if(R==-1){
                    R=size-1;
                }
                printf("Number deleted Successfully from  = %d\n",arr[R]);
                R-=1;
                te-=1;
            }
            break;
        case 3:
            if(te==size){
                printf("Queue is Full\n");
            }else{
                printf("Enter the Number\n");
                scanf("%d",&n);

                if(f==0){
                    f=size-1;
                }else{
                    f=f-1;
                }arr[f]=n;
                te+=1;
            }
            break;
        case 4:
            if(te==0){
                printf("Queue is Empty\n");
            }else{
                printf("Number deleted from front end = %d\n",arr[f]);
                f=(f+1)%size;
                te-=1;
            }
            break;
        case 5:
            if(te==0){
                printf("Queue is Empty\n");
            }else{
                x=f;
                for(i=1; i<=te; i++){
                    printf("%d ",arr[x]);
                    x=(x+1)%size;
                }
            }
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("Enter correct Choice in Here : \n");
        }
    }
    return 0;
}