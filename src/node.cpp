/*
 * nodo.cpp
 */

#include "../include/node.hpp"
#include <iostream>

namespace eda {


Node::Node(): data("\0"), ptrNext(nullptr) {
}

Node::Node(std::string val, Node* next, Node* left, Node* right): data(val), ptrNext(next), ptrLeft(left), ptrRight(right){

}

void Node::setData(std::string _data){
	data = _data;
}

void Node::setNext(Node* next){
	ptrNext = next;
}

void Node::setLeft(Node* left){
	ptrLeft = left;
}

void Node::setRight(Node* right){
	ptrRight = right;
}

std::string Node::getData(){
	return data;
}
Node* Node::getNext(){
	return ptrNext;
}

Node* Node::getLeft(){
	return ptrLeft;
}

Node* Node::getRight(){
	return ptrRight;
}

void Node::print(){
	std::cout << data ;
}

Node::~Node() {

}

} /* namespace eda */
