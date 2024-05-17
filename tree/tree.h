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
void sorted_display(struct node *);
void display_rLR(struct node *tree);
void display_RrL(struct node *);
int count(struct node *, int);
struct node *search(struct node *, int);
int count_leaves(struct node *);
int count_nodes(struct node *);
