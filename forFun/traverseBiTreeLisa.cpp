//
// Everything except traverse fxn is from bintreBill.cpp
// write your own traverse function
// 10/31/2019
// Happy Halloween!
//
#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

struct Node
  {
    Node * ll;
    int    info;
    Node * rl;
    Node() { ll = rl = NULL; }
  };

void traverse(Node * r) {
	if (r -> ll) traverse(r -> ll);
	cout << r -> info << endl;
	if (r -> rl) traverse(r -> rl);
}

int ar[] = {9,4,8,2,11,6,5,12,7,10};
int main()
{
  Node * root = NULL, *p, *t;
  bool done;
  srand(time(0));
  cout << "the random numbers" << endl;
  for (int i =0; i < 10; i++)
    {
      p = new Node;
      //p->info = rand()%100;
      p->info = ar[i];
      cout << p->info << " ";
      // insert into the tree
      if (!root) root = p;
      else
        {
          t = root;
          done = false;
          while ( !done)
            {
              if (p->info < t->info)
                if (t->ll) t = t->ll;
                else t->ll = p, done = true;
              else
                if (t->rl) t = t->rl;
                else t->rl = p, done = true; 
            }
        }
    }

  cout << endl << endl;
  cout << "starting traverssal" << endl;
  traverse(root);
  cout << endl;
}


  
