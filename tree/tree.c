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
void sorted_display(struct node *tree) {
    if (!tree) return;
    sorted_display(tree->left);
    printf("%d\n", tree->info);
    sorted_display(tree->right);
}
void display_rLR(struct node *tree) {
    if (!tree) return;
    printf("%d\n", tree->info);
    display_rLR(tree->left);
    display_rLR(tree->right);
}
void display_RrL(struct node *tree) {
    if (!tree) return;
    display_RrL(tree->right);
    printf("%d\n", tree->info);
    display_RrL(tree->left);
}
int count(struct node *tree, int c) {
    if (!tree) return c;
    c++;
    c = count(tree->left, c);
    c = count(tree->right, c);
}
struct node *search(struct node *tree, int value) {
    if (tree->info == value) return tree;
    if (value > tree->info) search(tree->right, value);
    else search(tree->left, value);
}
int count_leaves(struct node *tree) {
    if (!tree) return 0;
    if (!tree->left &&!tree->right) return 1;
    return count_leaves(tree->left) + count_leaves(tree->right);
}
int count_nodes(struct node *tree) {
    if (!tree) return 0;
    return count_nodes(tree->left) + count_nodes(tree->right) + 1;
}









