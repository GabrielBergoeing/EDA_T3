#ifndef BTree_HPP_
#define BTree_HPP_

#include "node.hpp"

namespace eda {

class  BTree{
private:
	Node* root;
public:
	BTree();
	void insert(Node* node);
	void insert_r(Node* tree, Node* node);
	void traverse_rec(Node* node, int level);
	void traverse();
	virtual ~BTree();
};

} /* namespace eda */

#endif