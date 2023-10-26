/*
 * abb.hpp
 *
 *  Created on: Sep 2, 2022
 *      Author: jsaavedr
 */

#ifndef ABBCC_HPP_
#define ABBCC_HPP_

#include "abbCCNode.hpp"

namespace eda {

class ABBCC {
private:
	ABBCCNode* root;
public:
	ABBCC();
	void insert_rec(int val, ABBCCNode* node);
	void insert(int val);
	ABBCCNode* find_rec(int val, ABBCCNode* node);
	ABBCCNode* find(int val);
	void traverse_rec(ABBCCNode* node, int level);
	void traverse();
	void showASC_rec(ABBCCNode* node);
	void showASC();
	void updateSize_rec(ABBCCNode* node);
	void updateSize();
	ABBCCNode* k_element_rec(int k, ABBCCNode* node);
	ABBCCNode* k_element(int k);
	virtual ~ABBCC();
};

} /* namespace eda */

#endif /* ABBCC_HPP_ */
