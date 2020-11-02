#pragma once
#include "Prototype.h"

class ProtoHerite2 : public Prototype {

private:
	float numeroDeProtoHerite2;

public:
	ProtoHerite2(string name, string color, float num);
	ProtoHerite2 *Clone() const override {
		return new ProtoHerite2(*this);
	}
	string GetName();
	string GetColor();
	float GetNumero();

};
