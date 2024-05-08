//
// Created by o9s9w on 5/3/2024.
//

#ifndef TREE_TREE_H
#define TREE_TREE_H

#endif //TREE_TREE_H


struct node {
    int info;
    struct node *right;
    struct node *left;
};

void create_tree();
struct node *create();
int empty(struct node *);
void add_node(struct node **, int);
void add(struct node **, int);
struct node *right(struct node *);
struct node *left(struct node *);
int read_root(struct node *);
void display(struct node *);
void display_R(struct node *);
