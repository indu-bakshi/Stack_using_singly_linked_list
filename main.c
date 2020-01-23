#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* link;
};
void push();
void pop();
void display();
struct node* root=NULL;

void main()
{
    int ch;
    while(1) {
        printf("\n1.Push \n2. POP \n3. Display \n4. Exit\n");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: display();
            break;
            case 4: exit(0);
        }
    }
}
void push(){
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    // temp->data=0;
    printf("Enter the data\n");
    scanf("%d",&temp->data);
    temp->link=NULL;
    temp->link=root;
    root=temp;
}

void pop(){
        root=root->link;
}


void display()
{
    struct node* temp;
    temp=root;
    if(temp==NULL)
    {
        printf("Stack is empty\n");
    }
    else {
        printf("%d->", temp->data);
        while (temp->link != NULL) {
            temp = temp->link;
            printf("%d-> ", temp->data);
        }
    }
}


