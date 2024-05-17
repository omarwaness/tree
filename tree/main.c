#include <stdio.h>
#include "tree.h"

int main() {
    struct node *tree, *value;
    int number_node = 0;
    tree = create();

    add_node(&tree, 30);
    add_node(&tree, 10);
    add_node(&tree, 25);
    add_node(&tree, 20);
    add_node(&tree, 35);
    add_node(&tree, 40);
    add_node(&tree, 15);
    add_node(&tree, 5);

    //printf("%d", tree->right->right->right->info);
    //printf("%d", tree->left->info);
    sorted_display(tree);

    number_node = count_nodes(tree);
    printf("\n%d\n", number_node);

    value = search(tree, 25);
    printf("%p\n", value);

    return 0;
}
