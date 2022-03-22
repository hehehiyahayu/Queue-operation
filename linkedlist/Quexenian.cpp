#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

 struct QNode{
   int key; //bisa diganti infotype
   struct QNode* next;
 };

 struct Queue{
   struct QNode *front, *rear;
 };

 struct QNode* newNode(int k){
   struct QNode* temp = (struct QNode*)malloc(sizeof(struct QNode));
   temp->key = k;
   temp->next = NULL;
   return temp;
 }

struct Queue* createQueue(){
  struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
  q->front = q->rear = NULL;

  return q;
}

void enQueue(struct Queue* q, int k){
  struct QNode* temp = newNode(k);

  if(q->rear == NULL){
    q->front = q->rear = temp;
    return;
  }

  q->rear->next = temp;
  q->rear = temp;
}

void deQueue(struct Queue* q){
  if(q->front == NULL) return;

  struct QNode* temp = q->front;

  q->front = q->front->next;

  if(q->front == NULL) q->rear = NULL;

  free(temp);
}
