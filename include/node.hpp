/*
 * node.hpp
 *
 */

#ifndef NODE_HPP_
#define NODE_HPP_
#include<string>

namespace eda {

class Node {
private:
	std::string data;
	Node* ptrNext; // For Stacks use
	Node* ptrLeft;	//For tree use
	Node* ptrRight; //For tree use
public:
	Node();
	Node(std::string _data, Node* next = nullptr, Node* left = nullptr, Node* right = nullptr);
	void setData(std::string _data);
	void setNext(Node* _next);
	void setLeft(Node* _left);
	void setRight(Node* _right);
	std::string getData();
	Node* getNext();
	Node* getLeft();
	Node* getRight();
	void print();
	virtual ~Node();
};

} /* namespace eda */

#endif /* NODE_HPP_ */
