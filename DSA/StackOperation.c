#include<stdio.h>
int stack[5],top=-1;
void push()
{
    int ele;
    if(top==4)
    {
        printf("Stack Overflow");
    }
    else
    {
        printf("Input a value: ");
        scanf("%d",&ele);

        top++;
        stack[top]=ele;
    }
}

void pop()
{
    if (top==-1)
    {
        printf("Stack Empty!");
    }
    else
    {
        printf("Deleted element: %d",stack[top]);
        top --;
    }
}

void peek()
{
    if(top==-1)
    {
        printf("Stack Empty!");
    }
    else
    {
        printf("Top Element: %d",stack[top]);
    }
}

int main()
{
    int ch;

    while(1)
    {
        printf("\n------Stack Operations-----\n");
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Peek\n");
        printf("4.Exit\n");

        printf("Enter a choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            push();
            break;

            case 2:
            pop();
            break;

            case 3:
            peek();
            break;

            case 4:
            printf("Exiting!!\n");
            return 0;

            default:
            printf("Invalid Choice\n");
        }
    }

    return 0;
}