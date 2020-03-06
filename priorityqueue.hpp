/***********************************************
 Priorityqueue in C++ using STL
 Winfried Bantel, HS Aalen
***********************************************/

#include <iostream>
#include <map>
#include <set>
#include <time.h>
using namespace std;

typedef set<int> st;
typedef map <double, st> pqt;

class priorityqueue {
	public:
		void push(int id, double priority);
		void push(int id, double priority, double priority_old);
		int  pop(int & id, double & priority);
		void print();
	private:
		pqt s;
};
