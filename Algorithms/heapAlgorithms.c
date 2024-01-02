#include "heapAlgorithms.h"
#include <stdlib.h>

void maxHeapify(Node* node) {

    Node* rightNode = node->right; //pointer to hold rightNode
    Node* leftNode = node->left; //pointer to hold left node
    
    /* Recursive base condition*/
    if (node == NULL || (rightNode == NULL && leftNode == NULL))
        return;
        
 
    
    if (rightNode == NULL || leftNode == NULL) { //this block of code will run if either rightNode or leftNode are NULL
        if (rightNode != NULL && leftNode == NULL) { //if the rightNode is not NULL but leftNode is NULL
            if (rightNode->value > node->value) {  //swap node with rightNode if rightNode is greater
                int tempValue = node->value; //tempValue stores the value of node so I can set node->value to a new value and set the rightnode->value = node->value
                node->value = rightNode->value;
                rightNode->value = tempValue;
                  
                return maxHeapify(rightNode); //run the same algorithm on the right node which is the new "node"
            } else {
                return; //node is in correct place
            }
        } else if (leftNode != NULL && rightNode == NULL) { //leftNode is not NULL but rightNode is
            if (leftNode->value > node->value) { //leftNode greater than node and no right node
                /* Store nodes' value, set node = to leftNode's value and set the new leftNode to node's value */
                int tempValue = node->value;
                node->value = leftNode->value;
                leftNode->value = tempValue;
                
                return maxHeapify(leftNode); //run the same algorithm on leftNode which is the new "Node"
            } else {
                return; //node in correct place
            }
        }
        
    }
    else { //the else block will handel the case when both right and left node are not null
        
        /*set largest node to the largest node value*/
        if ((node->value > rightNode->value) && (node->value > leftNode->value)) {
            return; //REturn since it is already a max heap
        } else if (rightNode->value > leftNode->value) { //right nodes is the greatest
            int tempValue = node->value; //tempValue stores the value of node so I can set node->value to a new value and set the rightnode->value = node->value
            node->value = rightNode->value;
            rightNode->value = tempValue;
            
            return maxHeapify(rightNode); //run the same algorithm on the right node which is the new "node"
            
        } else if (leftNode->value > rightNode->value) { //left node is the greatest
            /* Store nodes' value, set node = to leftNode's value and set the new leftNode to node's value */
            int tempValue = node->value;
            node->value = leftNode->value;
            leftNode->value = tempValue;
            
            return maxHeapify(leftNode); //run the same algorithm on leftNode which is the new "Node"
        } else {
            return; //must be an error
        }
        
    }
    
    
 
    
}

Node* getRoot(maxHeap* maxHeap) {
    if (maxHeap == NULL)
        return NULL;
    return maxHeap->root;
}


/*
 * @brief This function will get input from the console and create a node and put it in the maxHeap
 * @param pointer to the maxHeap nodes will get inputted into
 * @return void
 */
void loadHeap(maxHeap* mH) {
    uint32_t valueToInput; //This integer will store the integer to input to the heap
    Node* previousNode
    
}
