#pragma once
#include "Prototype.h"

class ProtoHerite1 : public Prototype {

private:
	float numeroDeProtoHerite1;

public:
	ProtoHerite1(string name, string color, float num);
	ProtoHerite1 *Clone() const override {
		return new ProtoHerite1(*this);
	}
	float GetNumero() const override;

};