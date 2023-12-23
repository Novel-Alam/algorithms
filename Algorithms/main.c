//
//  main.c
//  Algorithms
//
//  Created by Novel Alam on 12/17/23.
//

#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "heapAlgorithms.h"

int main(int argc, const char * argv[]) {

       
    
    Node* node1 = (Node*) malloc(sizeof(Node));
    node1->value = 4;
    
    maxHeap* mH = (maxHeap*) malloc(sizeof(maxHeap));
    mH->root = node1;
    
    Node* node2 = (Node*)malloc(sizeof(Node));
    node2->value = 2;
    node2->parent = node1;
    node1->left = node2;

    
    Node* node3 = (Node*) malloc(sizeof(Node));
    node3->value = 7;
    node3->parent = node1;
    node1->right = node3;

    
   Node* node4 = (Node*) malloc(sizeof(Node));
   node4->value = 5;
   node3->parent = node3;
   node3->parent->right = node4;
    
 

    Node* node5 = (Node*)malloc(sizeof(Node));
    node5->value = 1;
    node5->parent = node3;
    node5->parent->left = node5;
    
    
  
    maxHeapify(mH->root);
    
    return 0;
}
