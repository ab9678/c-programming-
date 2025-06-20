#include<stdio.h>
#define N 5
// 1 for yes 0 for no
int arr[N];
int f=-1;
int r=-1;

int isEmpty(){
    if (f==-1 && r==-1){
        printf("\nQueue is empty.\n");
        return 1;
    }else{
        return 0;
    }
    // else{
    //     printf("Queue is full.");
    // }

    // not empty doesnt nessesarily mean its full
}

int isFull(){
    if(r==N-1){
        printf("Queue is full.");
        return 1;
    }
    else{
        return 0;
    }
    // else{
    //     printf("Queue is empty.");
    // }
    // same as line: 17
}

int enQ(int value){
    if(isFull() == 1){
        printf("Full");
    }
    else if(isEmpty()){ // use elseif coz if isFull is true than why would you also check for isEmpty               // at the beginning queue is always empty 
        r=f=0;
    }
    else{
        r++;
    }
    arr[r]=value;
}

int deQ(){
    if(isEmpty()==1){
        printf("Queue is empty.");
    }
    else if (f==r){
        f=r=-1; // case where only single element present
    }
    else{
        printf("Deleted element is: %d",arr[f]);
        f++;
    }
}

void display(){
    if(isEmpty() == 1){
        printf("\nThe queue is emepty, nothing to display\n");
        return;
    }
    else{
        int i;
        for(i=f;i<=r;i++){
            printf("%d\t",arr[i]); // Reqd queue is: dont do this beacuse then it is printing the string after each element
        }
    }
}

int main(){
    int choice;
    int value;

    while(1){
        printf("Operation you want to perform:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
    


        switch (choice)
        {
        case 1: printf("Enter the element:");
            scanf("%d",&value);
            enQ(value);
            break;
        case 2: deQ();
        break;
        case 3: display();
        break;
        case 4:
        return 0;

        default:printf("Invalid input entered");
        break;
        }
    }
    return 0;
}