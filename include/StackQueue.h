#pragma once
#include <List.h>

template<class T>
class TStackOnList
{
protected:
	List<T> Container;
public:
	TStackOnList() : Container() {}
	TStackOnList(TStackOnList& _v) : Container(_v.Container) {}

	bool IsEmpty()
	{
		return(Container.IsEmpty());
	}
	int GetSize()
	{
		return(Container.GetSize());
	}
	virtual void push(const T data)
	{
		Container.push_front(data);
	}
	T pop()
	{
		return(Container.pop_front());
	}
};

template<class T>
class TQueueOnList :public TStackOnList<T>
{
public:
	TQueueOnList() :TStackOnList() {}
	void push(const T data) override
	{
		this->Container.push_back(data);
	}
};
