/***********************************************
 Priorityqueue in C++ using STL
 Winfried Bantel, HS Aalen
 Testprogram
***********************************************/
#include <iostream>
using namespace std;
#include "priorityqueue.hpp"

int main(int argc, char **argv)
{
	priorityqueue pq;
	int id, rc;
	double p;
	pq.push(123, 123),  pq.push(2, -2);
	pq.push(4711, 12.34), pq.push(4710, 12.34);
	pq.push(123, 12.34), pq.push(4711, 4711.1);
	cout << "Your priorityqueue:\n";
	pq.print();
	cout << "Now change priority of id 4711 from 4711.1 to 22\n";
	pq.push(4711, 22, 4711.1);
	pq.print();
	cout << endl;
	cout << "Now \"popping\":\n";
	while (pq.pop(id, p) == 0)
		cout << "prio " << p << " id: " << id << endl;
    return 0;
}
