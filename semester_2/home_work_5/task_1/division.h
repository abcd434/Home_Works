#pragma once
#include "operation.h"
#include "iostream"

using namespace std;

class Division : public Operation
{
	public:
		Division() {}
		double calculateSubTree()
		{
			return this->left->calculateSubTree() / this->right->calculateSubTree();
		}

		void printSubTree()
		{
			cout << "(";
			left->printSubTree();
			cout << " / ";
			right->printSubTree();
			cout << ")";
		}
};

