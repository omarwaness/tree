#include <stdio.h>
#include "tree.h"

int main() {
    struct node *tree;
    int i;
    tree = create();
    for (i=0; i < 6; i++) {
        add(&tree, i);
    }
    //printf("%d", tree->left->info);
    display(tree);

    return 0;
}
