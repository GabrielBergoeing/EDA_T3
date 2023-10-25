/*
 * abb.hpp
 *
 *  Created on: Sep 2, 2022
 *      Author: jsaavedr
 */

#ifndef ABB_HPP_
#define ABB_HPP_

#include "abbNode.hpp"

namespace eda {

class ABB {
private:
	ABBNode* root;
public:
	ABB();
	void insert_rec(int val, ABBNode* node);
	void insert(int val);
	ABBNode* find_rec(int val, ABBNode* node);
	ABBNode* find(int val);
	void traverse_rec(ABBNode* node, int level);
	void traverse();
	void showASC_rec(ABBNode* node);
	void showASC();
	void updateSize_rec(ABBNode* node);
	void updateSize();
	ABBNode* k_element_rec(int k, ABBNode* node);
	ABBNode* k_element(int k);
	virtual ~ABB();
};

} /* namespace eda */

#endif /* ABB_HPP_ */
