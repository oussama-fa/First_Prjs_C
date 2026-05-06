#pragma once
#include "tree_bag.hpp"
#include "searchable_bag.hpp"

class searchable_tree_bag : public tree_bag, public searchable_bag {
	public:
		searchable_tree_bag() = default;
		~searchable_tree_bag() = default;
		searchable_tree_bag(const searchable_tree_bag& obj) : tree_bag(obj) {}
		searchable_tree_bag& operator=(const searchable_tree_bag& obj) {
			if (this != &obj)
				tree_bag::operator=(obj);
			return *this;
		}
		bool has(int val) const {
			node* current = tree;
			while (current) {
				if (current->value == val)
					return true;
				current = (val > current->value) ? current->r : current->l;
			}
			return false;
		}
};