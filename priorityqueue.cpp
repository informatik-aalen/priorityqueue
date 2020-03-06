/***********************************************
 Priorityqueue in C++ using STL
 Winfried Bantel, HS Aalen
***********************************************/
#include <map>
#include <set>
#include "priorityqueue.hpp"
#include <iostream>
using namespace std;

void priorityqueue::push(int id, double priority) {
	pqt::iterator i = s.find(priority);
	if (i == s.end()) {
		st tmp;
		tmp.insert(id);
		s.insert(pair<double, st> (priority, tmp));
	}
	else
		i->second.insert(id);
}

void priorityqueue::push(int id, double priority, double priority_old) {
	pqt::iterator i = s.find(priority_old);
	if (i != s.end()) {
		st * tmp = &(i->second);
		st::iterator j = tmp->find(priority_old);
		tmp->erase(*j);
		if (tmp->begin() == tmp->end())
			s.erase(i);
	}
	push(id, priority);
}

int priorityqueue::pop(int & id, double & priority) {
	if (s.begin() == s.end())
		return -1;
	pqt::iterator i =s.begin();
	st* tmp = &(i->second);
	st::iterator j = tmp->begin();
	priority = i->first, id = *j;
	tmp->erase(*j);
	if (tmp->begin() == tmp->end())
		s.erase(i);
	return 0;
}

void priorityqueue::print() {
	int lauf = 0;
	for (pqt::iterator i =s.begin(); i != s.end(); i++) {
		cout << ++lauf << " " << i->first <<": ";
		st tmp = i->second;
		for (st::iterator j =tmp.begin(); j != tmp.end(); j++)
			cout << " " << *j;
		cout  << endl;
	}
}
