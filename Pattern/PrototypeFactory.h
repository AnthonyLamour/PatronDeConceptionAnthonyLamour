#pragma once

#include"Prototype.h"
#include"ProtoHerite1.h"
#include"ProtoHerite2.h"
#include <unordered_map>

using std::string;

class PrototypeFactory {
	
	public :
		enum Type {
			PROTOTYPE_1 = 0,
			PROTOTYPE_2
		};
		PrototypeFactory();
		~PrototypeFactory();
		Prototype *CreatePrototype(Type type);
	private:
		std::unordered_map<Type, Prototype *, std::hash<int>> prototypes_;
};