/*
 * abbCCNode.cpp
 *
 *  Created on: Sep 2, 2022
 *      Author: jsaavedr
 */

#include "../include/abbCCNode.hpp"

namespace eda {

ABBCCNode::ABBCCNode():
	ptrLeft(nullptr), data(-1), symbol('\0'), ptrRight(nullptr) {
	// TODO Auto-generated constructor stub
}

ABBCCNode::ABBCCNode(int val):
		ptrLeft(nullptr), data(val), symbol('\0'), ptrRight(nullptr){

}

void ABBCCNode::setLeft(ABBCCNode* node){
	ptrLeft = node;
}

void ABBCCNode::setRight(ABBCCNode* node){
	ptrRight = node;
}

void ABBCCNode::setData(int val){
	data = val;
}

void ABBCCNode::setSize(int s){
	size = s;
}

void ABBCCNode::setSymbol(char sb){
	symbol = sb;
}

ABBCCNode* ABBCCNode::getLeft(){
	return ptrLeft;
}

ABBCCNode* ABBCCNode::getRight(){
	return ptrRight;
}

int ABBCCNode::getData(){
	return data;
}

int ABBCCNode::getSize(){
	return size;
}

char ABBCCNode::getSymbol(){
	return symbol;
}

ABBCCNode::~ABBCCNode() {
	if (ptrLeft != nullptr){
		delete ptrLeft;
	}
	if (ptrRight != nullptr){
		delete ptrRight;
	}
}

} /* namespace eda */
