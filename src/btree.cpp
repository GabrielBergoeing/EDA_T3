#include "../include/btree.hpp"
#include <iostream>

namespace eda {

BTree::BTree():root(nullptr) {
	// TODO Auto-generated constructor stub
}

void BTree::insert(Node* node){
	if(root == nullptr) root = node;
	else insert_r(root, node);
}

void BTree::insert_r(Node* tree, Node* node){
	if(tree->getLeft() == nullptr) tree->setLeft(node);
	else if(tree->getRight() == nullptr) tree->setRight(node);
}

void BTree::traverse_rec(Node* node, int level){
	if (node != nullptr){
		std::cout << std::string(level*2, '-');
		std::cout << node->getData() << std::endl;
		traverse_rec(node->getLeft(), level + 1);
		traverse_rec(node->getRight(), level + 1);
	}
}

void BTree::traverse(){
	traverse_rec(root, 1);
}

BTree::~BTree() {
	delete root;
}
} /* namespace eda */