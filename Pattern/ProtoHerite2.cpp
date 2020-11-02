#include "pch.h"
#include "ProtoHerite2.h"

ProtoHerite2::ProtoHerite2(string name, string color, float num)
{

	prototypeName = name;
	prototypeColor = color;
	numeroDeProtoHerite2 = num;

}

string ProtoHerite2::GetName()
{
	return prototypeName;
}

string ProtoHerite2::GetColor()
{
	return prototypeColor;
}

float ProtoHerite2::GetNumero()
{
	return numeroDeProtoHerite2;
}
