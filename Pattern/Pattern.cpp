// Pattern.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>
#include"Prototype.h"
#include"ProtoHerite1.h"
#include"ProtoHerite2.h"
#include"PrototypeFactory.h"
#include <string>

int main()
{

	std::cout << "Utilisation pattern de conception Prototype \n";

	ProtoHerite1 ProtoHeriteTest1("ProtoHerite1Base", "red", 1);
	ProtoHerite2 ProtoHeriteTest2("ProtoHerite2Base", "green", 2);

	ProtoHerite1 CloneProtoHerite1 = *ProtoHeriteTest1.Clone();
	ProtoHerite2 CloneProtoHerite2 = *ProtoHeriteTest2.Clone();

	std::cout << "ProtoHeriteTest1 name : "<< ProtoHeriteTest1.GetName()<< " color : "<< ProtoHeriteTest1.GetColor()<< " numero : "<< ProtoHeriteTest1.GetNumero()<< "\n";
	std::cout << "CloneProtoHerite1 name : "<< CloneProtoHerite1.GetName()<< " color : "<< CloneProtoHerite1.GetColor()<< " numero : "<< CloneProtoHerite1.GetNumero()<< "\n";

	std::cout << "ProtoHeriteTest2 name : "<< ProtoHeriteTest2.GetName()<< " color : "<<ProtoHeriteTest2.GetColor()<< " numero : "<< ProtoHeriteTest2.GetNumero()<< "\n";
	std::cout << "CloneProtoHerite2 name : " << CloneProtoHerite2.GetName()<< " color : "<< CloneProtoHerite2.GetColor()<< " numero : "<< CloneProtoHerite2.GetNumero()<< "\n";

	std::cout << "Utilisation pattern de conception Fabrique \n";

	PrototypeFactory *prototyprFactory = new PrototypeFactory();

	Prototype *Proto1 = prototyprFactory->CreatePrototype(PrototypeFactory::PROTOTYPE_1);
	Prototype *Proto2 = prototyprFactory->CreatePrototype(PrototypeFactory::PROTOTYPE_2);

	std::cout << "Proto1 name : " << Proto1->GetName() << " color : " << Proto1->GetColor() << " numero : " << Proto1->GetNumero() << "\n";

	std::cout << "Proto2 name : " << Proto2->GetName() << " color : " << Proto2->GetColor() << " numero : " << Proto2->GetNumero() << "\n";

	std::cin;

	return 0;
}
