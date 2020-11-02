#include "pch.h"
#include "PrototypeFactory.h"

PrototypeFactory::PrototypeFactory()
{
	prototypes_[Type::PROTOTYPE_1] = new ProtoHerite1("ProtoHerite1", "blue", 45);
	prototypes_[Type::PROTOTYPE_2] = new ProtoHerite1("ProtoHerite2", "pink", 90);
}

PrototypeFactory::~PrototypeFactory()
{
	delete prototypes_[Type::PROTOTYPE_1];
	delete prototypes_[Type::PROTOTYPE_2];
}

Prototype * PrototypeFactory::CreatePrototype(Type type)
{
	return prototypes_[type]->Clone();
}
