#include <stdio.h>
#include <stdlib.h>
struct node {
    short data ;
    struct node * left;
    struct node * right;
};

struct node * insertnode(struct node * root ,short data);

short inorder(struct node * root);
short preorder(struct node *root);
short postorder(struct node *root);


int main()
{

    struct node * root = NULL;

    root = insertnode(root , 5);  // use the root which defined global to be used in the 1st call of 1st ever insertion

    // root now = the address of the 1st node which is the root


    insertnode(root , 3);
    insertnode(root , 7);
    insertnode(root , 2);

    insertnode(root , 4);
    insertnode(root , 6);
    insertnode(root , 8);

    if(!inorder(root)) printf("No Nodes Added!");


    return 0;
}
struct node * createnode(short data) {

    struct node * newnode = (struct node *)malloc(sizeof(struct node));

    if(newnode){  // correctly allocated memory

        newnode->data = data;

        newnode->left = NULL;

        newnode->right = NULL;
    }
        return newnode;

}


struct node * insertnode(struct  node * root,short data ){

    if (root == NULL){        //1st node in the tree

        return createnode(data);

        }
    else {
            if( data <= root-> data) {  // insert on the left side

            root->left = insertnode(root->left  , data );
            }

            else root->right = insertnode( root->right , data);

    }

}


short inorder(struct node * root){

    if ( root == NULL){ // has 2 objectives : 1- in the *1st call* if no address given then return 0 as indicates to no tree  ,
                                  // 2- to make nothing when the call end in the below lines
        return 0;
    }
    else{

        inorder(root->left); // go to the left subtree

        printf("%hd ", root->data);

        inorder( root -> right);
        return 1;
    }
}

short postorder(struct node *root) {
    if (root == NULL) {
        return 0;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%hd ", root->data);
}
short preorder(struct node *root) {
    if (root == NULL) {
        return 0;
    }
    printf("%hd ", root->data);
    preorder(root->left);
    preorder(root->right);
}

