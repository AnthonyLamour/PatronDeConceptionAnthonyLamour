// Pattern.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>
#include"Prototype.h"
#include"ProtoHerite1.h"
#include"ProtoHerite2.h"
#include <string>

int main()
{
	ProtoHerite1 ProtoHeriteTest1("ProtoHerite1Base", "red", 1);
	ProtoHerite2 ProtoHeriteTest2("ProtoHerite2Base", "green", 2);

	ProtoHerite1 CloneProtoHerite1 = *ProtoHeriteTest1.Clone();
	ProtoHerite2 CloneProtoHerite2 = *ProtoHeriteTest2.Clone();

	std::cout << "ProtoHeriteTest1 name : "<< ProtoHeriteTest1.GetName()<< " color : "<< ProtoHeriteTest1.GetColor()<< " numero : "<< ProtoHeriteTest1.GetNumero()<< "\n";
	std::cout << "CloneProtoHerite1 name : "<< CloneProtoHerite1.GetName()<< " color : "<< CloneProtoHerite1.GetColor()<< " numero : "<< CloneProtoHerite1.GetNumero()<< "\n";

	std::cout << "ProtoHeriteTest2 name : "<< ProtoHeriteTest2.GetName()<< " color : "<<ProtoHeriteTest2.GetColor()<< " numero : "<< ProtoHeriteTest2.GetNumero()<< "\n";
	std::cout << "CloneProtoHerite2 name : " << CloneProtoHerite2.GetName()<< " color : "<< CloneProtoHerite2.GetColor()<< " numero : "<< CloneProtoHerite2.GetNumero()<< "\n";

	std::cin;

	return 0;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Conseils pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
