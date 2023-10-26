/*
 * abb.cpp
 *
 *  Created on: Sep 2, 2022
 *      Author: jsaavedr
 */

#include "../include/abbCC.hpp"
#include <iostream>

namespace eda {

ABBCC::ABBCC():root(nullptr) {
	// TODO Auto-generated constructor stub
}

void ABBCC::insert_rec(int val, ABBCCNode* node){
	if (val < node->getData()){
		//LEFT
		if (node->getLeft() == nullptr){
			node->setLeft(new ABBCCNode(val));
			//std::cout<<val << " inserted on left" << std::endl;
		}
		else{
			insert_rec(val, node->getLeft());
		}
	}
	else{
		//RIGHT
		if (node->getRight() == nullptr){
			node->setRight(new ABBCCNode(val));
			//std::cout<<val << " inserted on right" << std::endl;
		}
		else{
			insert_rec(val, node->getRight());
		}
	}
}

void ABBCC::insert(int val){
	if (root == nullptr){
		root = new ABBCCNode(val);
	}
	else{
		insert_rec(val, root);
	}
}

ABBCCNode* ABBCC::find_rec(int val, ABBCCNode* node){
	ABBCCNode* ans = nullptr;

	if (node->getData() == val){
		ans = node;
	}
	else{
		if (val < node->getData()){
			ans = find_rec(val, node->getLeft());
		}
		else{
			ans = find_rec(val, node->getRight());
		}
	}

	return ans;
}

ABBCCNode* ABBCC::find(int val){
	ABBCCNode* ans = nullptr;
	ans = find_rec(val, root);
	return ans;
}

void ABBCC::traverse_rec(ABBCCNode* node, int level){
	if (node != nullptr){
		std::cout << std::string(level*2, '-');
		if(node->getSymbol() != '\0'){
			std::cout << node->getSymbol() << std::endl;
		} else {
			std::cout << node->getData() << std::endl;
		}
		traverse_rec(node->getLeft(), level + 1);
		traverse_rec(node->getRight(), level + 1);
	}
}

void ABBCC::traverse(){
	traverse_rec(root, 1);
}

/*extras*/
void ABBCC::showASC_rec(ABBCCNode* node){
	if (node != nullptr){
		showASC_rec(node->getLeft());
		std::cout << node->getData() << " " << std::flush;
		showASC_rec(node->getRight());
	}
}
void ABBCC::showASC(){
	showASC_rec(root);
	std::cout << std::endl;
}

void ABBCC::updateSize_rec(ABBCCNode* node){
	if (node != nullptr){
		updateSize_rec(node->getLeft());
		updateSize_rec(node->getRight());
		int lSize = 0;
		int rSize = 0;
		if (node->getLeft() != nullptr){
			lSize = node->getLeft()->getSize();
		}
		if (node->getRight() != nullptr){
			rSize = node->getRight()->getSize();
		}
		node->setSize(lSize + rSize + 1);
	}
}

void ABBCC::updateSize(){
	updateSize_rec(root);
}


ABBCCNode* ABBCC::k_element_rec(int k, ABBCCNode* node){
	ABBCCNode* ans = nullptr;
	if (node != nullptr){
		int lSize = 0;
		int posNode = 0;
		if (node->getLeft() != nullptr){
			lSize = node->getLeft()->getSize();
		}
		posNode = lSize + 1;

		if (k == posNode){
			ans = node;
		}
		else if  (k > posNode ){
			ans = k_element_rec( k - posNode, node->getRight());
		}
		else{
			ans = k_element_rec( k, node->getLeft());
		}
	}
	return ans;

}

ABBCCNode* ABBCC::k_element(int k){
	return k_element_rec(k, root);
}

ABBCC::~ABBCC() {
	delete root;
}
} /* namespace eda */
