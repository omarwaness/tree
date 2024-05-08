//
// Created by o9s9w on 5/3/2024.
//

#include "tree.h"
#include <stdio.h>
#include <stdlib.h>


struct node *create() {
    return NULL;
}
int empty(struct node *t) {
    return t->info == NULL;
}
void add_node(struct node **t, int value) {
    struct node *temp, *elem;
    struct node *temptree = *t;
    elem = (struct node *) malloc(sizeof(struct node));
    elem->info = value;
    elem->left = NULL;
    elem->right = NULL;
    if (temptree) {
        do {
            temp = temptree;
            if (value > temptree->info) {
                temptree = temptree->right;
                if (!temptree) temp->right = elem;
            } else {
                temptree = temptree->left;
                if (!temptree) temp->left = elem;
            }
        } while (temptree);
    } else {
        *t = elem;
    }
}
void add(struct node **t, int value) {
    struct node *elem, *temptree = *t;
    elem = (struct node *) malloc(sizeof(struct node));
    elem->info = value;
    elem->left = NULL;
    elem->right = NULL;
    if (!temptree) {
        *t = elem;
        return;
    }
    if (value > temptree->info)
        add(&temptree->right, value);
    else
        add(&temptree->left, value);
}
struct node *right(struct node *t) {
    if (!empty(t)) {
        return t->right;
    }
}
struct node *left(struct node *t) {
    if (!empty(t)) {
        return t->left;
    }
}
int read_root(struct node *t) {
    if (!empty(t)) {
        return t->info;
    }
}
void display(struct node *tree) {
    if (!tree) return;
    if (tree->left) display(tree->left);
    printf("%d\n", tree->info);
    if (tree->right) display(tree->right);
}
void display_R(struct node *tree) {
    if (!tree) return;
    if (tree->right) display(tree->right);
    printf("%d\n", tree->info);
    if (tree->left) display(tree->left);
}


/*void add(struct node **t, int value) {
    struct node *temptree= *t;
    struct node *elem = (struct node*)malloc(sizeof(struct node));
    elem->info = value;
    elem->left=elem->right=NULL;
    if (!temptree) {
        *t = elem;
        return;
    }
    if ((elem->info > temptree->info)&&(elem->info!=temptree->info))
        add(&temptree->right, elem->info);
    if ((elem->info < temptree->info)&&(elem->info!=temptree->info))
        add(&temptree->left, elem->info);
}*/

