/*
 * abbNode.h
 *
 *  Created on: Sep 2, 2022
 *      Author: jsaavedr
 */

#ifndef ABBCCNODE_HPP_
#define ABBCCNODE_HPP_

namespace eda {

class ABBCCNode {
private:
	ABBCCNode* ptrLeft;
	int data;
	char symbol;
	ABBCCNode* ptrRight;
	int size;
public:
	ABBCCNode();
	ABBCCNode(int val);
	void setLeft(ABBCCNode* node);
	void setRight(ABBCCNode* node);
	void setData(int val);
	void setSize(int s);
	void setSymbol(char sb);
	ABBCCNode* getLeft();
	ABBCCNode* getRight();
	int getData();
	int getSize();
	char getSymbol();
	virtual ~ABBCCNode();
};

} /* namespace eda */

#endif /* ABBCCNODE_HPP_ */
