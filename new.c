  #include <stdio.h>
  #define MAX 10
  int  top = -1,stack[MAX];
  void push();
  void pop();
  void show();
  int main()
{
   int choice;

    while (1)
    {
        printf("\nPerform operations on the stack:");
        printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);

        default:
            printf("\nInvalid choice!!");
        }
    }

}

void push(){
  int x ;
  if(top = MAX-1 ){
    printf("stack overflow")
  }
  else{
   scanf("%d", &x);
   top =+ 1;
   stack[top]= x;
  }
}

void pop(){
  int x ;
  if(top = -1 ){
    printf("stack underflow")
  }
  else{
   
   top =- 1;
  }
}