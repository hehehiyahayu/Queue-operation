//Referensi : GeeksforGeeks
//Tanggal pembuatan : 17/03/2022

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "Quexenian.cpp"

using namespace std;

int main(){
  struct Queue* q = createQueue();
  cout << "Input Awal" << endl;
  enQueue(q, 10);
  enQueue(q, 20);
  cout << "\nQueue Front : " << q->front->key;
  cout << "\nQueue Rear : " << q->rear->key << endl;
  deQueue(q);
  deQueue(q);
  cout << "\nInput Ulang" << endl;
  enQueue(q, 30);
  enQueue(q, 40);
  enQueue(q, 50);
  cout << "\nQueue Front : " << q->front->key;
  cout << "\nQueue Rear : " << q->rear->key << endl;
  deQueue(q);

  cout << "\nSetelah deQueue" << endl;
  cout << "\nQueue Front : " << q->front->key;
  cout << "\nQueue Rear : " << q->rear->key;

  return 0;
}
