#ifndef SUBJECT_H
#define SUBJECT_H

//MAKE SURE TO #INCLUDE LISTS!!
#include <list>
#include <vector>
#include <string>
#include "updatable.h"

using namespace std;

class Subject
{
		protected:
		Subject();
		list<Updatable *> observers;

		public:
		~Subject();

// ADD OBSERVER TO LIST

		void add_observer(Updatable *observer);

//REMOVE OBSERVER FROM THE LIST

		void delete_observer(Updatable *observer);

//NOTIFY OBSERVERS

		virtual void notify_observers() = 0;
};

#endif

// Using lists rather than strings, and will be declaring the Add/Delete/Notify
