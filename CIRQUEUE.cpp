#include <stdio.h>  
# define m 6  
int q[m];	
int f=-1;  
int r=-1;  
void enqueue(int e)  
{  
    if((r+1)%m==f)  
    {  
        printf("Queue is overflow..");  
    }  
    else  
    {   printf("Enter the element which is to be inserted");scanf("%d", &x);
        if(f==-1&&r==-1)   
    	{  
        	f=0;  
        	r=0;  
        	q[r]=e;  
    	}  
		r=(r+1)%m;   
        q[r]=e;    
    }  
}  

int dequeue()  
{  
    if((f==-1) && (r==-1))
    {  
        printf("\nQueue is underflow..");  
    }  
 else if(f==r)  
{  
   printf("\nThe Dequeued Element is %d", q[f]);  
   f=-1;  
   r=-1;  
}   
else  
{  
    printf("\nThe Dequeued Element is %d", q[f]);  
   f=(f+1)%m;  
}  
}  
void display()  
{  
    int i=f;  
    if(f==-1&&r==-1)  
    {  
        printf("\n Queue is empty..");  
    }  
    else  
    {  
        printf("\nElements in a Queue are :\n");  
        while(i<=r)  
        {   if(i==r)
            printf("%d : ",q[i]);  
            else
		    printf("%d : ",q[i]);  
            i=(i+1)%m;  
        }  
    }  
}  
int main()  
	{   int ch=1;   
	while(ch<4&&ch!=0)  
	{  
	printf("\n\t*****MENU*****\n\tInsert(0)\n\tDelete(1)\n\tDisplay(2)\nEnter your choice: ";  
	scanf("%d", &ch);  
	switch(ch)  
	{  
	    case 1:enqueue();break;  
	    case 2:dequeue();break;  
	    case 3:display();  
	}
	}  
	return 0;  
}  
