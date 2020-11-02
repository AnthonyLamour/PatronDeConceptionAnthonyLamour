#include "pch.h"
#include "Prototype.h"

using std::cout;

Prototype::Prototype()
{
	prototypeName = "";
	prototypeColor = "";
}

Prototype::Prototype(string newPrototypeName)
{
	prototypeName = newPrototypeName;
}

Prototype::~Prototype()
{
}

void Prototype::SetPrototypeColor(string newProtoypeColor)
{
	prototypeColor = newProtoypeColor;
}

string Prototype::GetName()
{
	return prototypeName;
}

string Prototype::GetColor()
{
	return prototypeColor;
}
