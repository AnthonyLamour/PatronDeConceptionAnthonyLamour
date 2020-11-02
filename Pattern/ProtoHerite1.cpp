#include "pch.h"
#include "ProtoHerite1.h"

ProtoHerite1::ProtoHerite1(string name, string color, float num)
{
	prototypeName = name;
	prototypeColor = color;
	numeroDeProtoHerite1 = num;
}

float ProtoHerite1::GetNumero() const
{
	return numeroDeProtoHerite1;
}