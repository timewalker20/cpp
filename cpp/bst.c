#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *r_child;
    struct node *l_child;
};

struct node *new_node(int x)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->l_child = NULL;
    temp->r_child = NULL;
    return temp;
}

struct node *insert(struct node *root, int x)
{
    if (root == NULL)
    {
        return new_node(x);
    }
    else if (x > root->data)
        root->r_child = insert(root->r_child, x);
    else
        root->l_child = insert(root->l_child, x);
    return root;
}

void preorder(struct node *root)
    {
        if(root!=NULL) // checking if the root is not null
        {
            printf(" %d ", root->data); // printing data at root
            preorder(root->l_child); // visiting left child
            preorder(root->r_child); // visiting right child
        }
    }

    void postorder(struct node *root)
    {
        if(root!=NULL) // checking if the root is not null
        {
            postorder(root->l_child); // visiting left child
            postorder(root->r_child); // visiting right child
            printf(" %d ", root->data); // printing data at root
        }
    }

    void inorder(struct node *root)
    {
        if(root!=NULL) // checking if the root is not null
        {
            inorder(root->l_child); // visiting left child
            printf(" %d ", root->data); // printing data at root
            inorder(root->r_child);// visiting right child
        }
    }
int main()
{
    int value = 0;
    int choice;
    struct node *root = NULL;
    


    while (1)
    {
        printf("\n*****\n");
        printf("0. Create root node \n");
        printf("1. Insert Node \n");
        printf("2. Delete Node \n");
        printf("3. Display Tree\n"); // Add an option to display the tree.
        printf("4. ** To exit **");

        printf("\n Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            printf("\n Enter your root node value ");
            scanf("%d", &value);
            root = new_node(value);
            break;
        case 1:
            printf("\n Enter your node value ");
            scanf("%d", &value);
            insert(root, value); // Assign the returned root to the main tree.
            break;
        case 2:
            // Implement delete function.
            break;
        case 3:
            printf("\n preoder ");
            preorder(root);
            printf("\n inoder ");
            inorder(root);
            printf("\n postorder ");
            postorder(root);
            break;
        case 4:
            exit(0);
        default:
            printf("\n Wrong Choice");
            break;
        }
    }
    return 0;
}
