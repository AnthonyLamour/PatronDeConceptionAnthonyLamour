#include "pch.h"
#include "ProtoHerite2.h"

ProtoHerite2::ProtoHerite2(string name, string color, float num)
{

	prototypeName = name;
	prototypeColor = color;
	numeroDeProtoHerite2 = num;

}

float ProtoHerite2::GetNumero() const
{
	return numeroDeProtoHerite2;
}
