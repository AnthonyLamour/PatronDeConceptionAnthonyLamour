#pragma once
#include <iostream>

using std::string;

class Prototype {

protected:
	std::string prototypeName;
	std::string prototypeColor;

public:
	Prototype();
	Prototype(string newPrototypeName);
	virtual ~Prototype();
	virtual void SetPrototypeColor(string newProtoypeColor);
	virtual Prototype *Clone() const = 0;

};