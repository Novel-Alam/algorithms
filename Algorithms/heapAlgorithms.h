//
//  heapAlgorithms.h
//  Algorithms
//
//  Created by Novel Alam on 12/17/23.
//

#ifndef heapAlgorithms_h
#define heapAlgorithms_h

#include <stdio.h>
/* early declaration to prevent compiletime error */
struct Node;
struct maxHeap;

/* Node structure that contains two nodes */
typedef struct Node{
    struct Node* left; //pointer to the left node
    struct Node* right; //pointer to the right node
    struct Node* parent; //pointer to the parent node
    double value; //value stored in the node
    
    
} Node;

/* maxHeap structure that will have the root as greatest element*/
typedef struct maxHeap{
    Node* root; //Pointer to node that is parent
    void (*maxHeapify)(Node*); //function pointer to run maxheap on a node
    Node* (*getRoot)(struct maxHeap*); //function pointer to return root
} maxHeap;

/* function decarations that will be linked to the function pointers in maxHeap */

/*
 * @brief Will place a node in a heap in a position to maintain maxheap properity
 * @param Pointer of the node it be maxHeap alogrithm run on it
 * @return Nothing returned
 */
void maxHeapify(Node*);

/*
 * @brief Will retreive the root node of the maxHeap
 * @param Pointer to the maxHeap
 * @return Pointer to the root
 */

Node* getRoot(maxHeap *);


#endif /* heapAlgorithms_h */
