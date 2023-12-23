#include "heapAlgorithms.h"
#include <stdlib.h>
/*
 * @brief Will place a node in a heap in a position to maintain maxheap properity
 * @param Pointer of the node it be maxHeap alogrithm run on it
 * @return Nothing returned
 */
void maxHeapify(Node* node) {
    /*Keep running loop as long as one of the child nodes are greater than node*/
    while ((node->value < node->right->value) || (node->value < node->left->value)) {
        /*find the bigger of the childen and swap places*/
        if (node->right->value >=  node->left->value) { //if right node is greater or equal
            node->right->parent = node->parent; //set parent of right to be equal to node's parent
            if (node->parent != NULL)
                node->parent->right = node->right; //set the right child of node's parent to nodes' right child
            
            node->parent = node->right; //set the node's parent to right node
            
            
            
            /* These nodes hold the left and right of the nodes'right as they get overridden*/
            Node* tempLeft =  node->right->left;
            Node* tempRight =  node->right->right;

            
            node->right->left = node->left; //set left of the right node to left of node;
            node->right->right = node; //set right nodes right  to be equal to node
            
            /* Set the left and right nodes of node to  nodes'right*/
            node->left->parent = node->parent; //set the old left of node parent to node replaceing node
            node->left = tempLeft;
            
            node->right = tempRight;
            
            //free(tempLeft);
            //free(tempRight);
            /* sets the proper parent to the left and right node of node if they are not null*/
            if (node->left != NULL)
                node->left->parent = node;
            
            if (node->right != NULL)
                node->right->parent = node;
            
            

        } else {
            
        }
    }
}

/*
 * @brief Will place a node in a heap in a position to maintain maxheap properity
 * @param Pointer of the node it be maxHeap alogrithm run on it
 * @return Nothing returned
 */
Node* getRoot(maxHeap* maxHeap) {
    return maxHeap->root;
}

