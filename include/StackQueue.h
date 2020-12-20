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

template<class T>
class TDeque
{
protected:
	List<T> Container;
public:
	TDeque() : Container() {}
	TDeque(TDeque& _v) : Container(_v.Container) {}

	T& operator[](const int index)
	{
		if (index < 0 || index >= GetSize())
			throw length_error("incorrect index");

		int counter = 0;
		auto i = Container.begin();
		while (i.CanMove())
		{
			if (counter == index)
				return *i;
			i++;
			counter++;
		}
	}

	bool IsEmpty()
	{
		return(Container.IsEmpty());
	}
	int GetSize()
	{
		return(Container.GetSize());
	}
	void PushL(const T data)
	{
		Container.push_front(data);
	}
	T PopL()
	{
		return(Container.pop_front());
	}
	void PushR(const T data)
	{
		Container.push_back(data);
	}
	T PopR()
	{
		return(Container.pop_back());
	}
};