#include "pch.h"
#include "ProtoHerite1.h"

ProtoHerite1::ProtoHerite1(string name, string color, float num)
{
	prototypeName = name;
	prototypeColor = color;
	numeroDeProtoHerite1 = num;
}

string ProtoHerite1::GetName()
{
	return prototypeName;
}

string ProtoHerite1::GetColor()
{
	return prototypeColor;
}

float ProtoHerite1::GetNumero()
{
	return numeroDeProtoHerite1;
}