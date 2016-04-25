#include "subject.h"
#include <list>

Subject::Subject()
{}
Subject::~Subject()
{}

//ADD OBSERVER

void Subject::add_observer(Updatable *observer)
{
	observers.push_back(observer);
}

//DELETE OBSERVER

void Subject::delete_observer(Updatable *observer)
{
	observers.remove(observer);
}

