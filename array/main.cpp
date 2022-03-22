//Refrensi : GeeksforGeeks
//Tanggal : 17/03/2022

#include <iostream>
#include <stdio.h>
#include "Quexetor.cpp"

using namespace std;

int main(){
  struct Queue *queue = createQueue(50);

  enqueue(queue, 10);
  enqueue(queue, 15);
  enqueue(queue, 20);
  enqueue(queue, 25);

  cout << "\ndequeued from queue : " << dequeue(queue) << endl;

  cout << "\nFront item from queue : " << front(queue) << endl;

  cout << "\nRear item from queue : " << rear(queue) << endl;

  return 0;
}
