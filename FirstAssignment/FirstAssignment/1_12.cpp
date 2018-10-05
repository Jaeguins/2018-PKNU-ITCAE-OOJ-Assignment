#include <iostream>

template<class TreeContainer>
class TreeNode {
private:
    TreeContainer data;
    TreeNode<TreeContainer>*parent, *left, *right;
public:
    TreeNode(TreeContainer value) {
        data = value;
    };
    
    TreeContainer getData() {
        return data;
    };
    
    void print() {
        if (left != NULL) {
            left->print();
        }
        std::cout << data;
        if (right != NULL) {
            right->print();
        }
    }

    TreeNode<TreeContainer>* getParent() {
        return parent;
    };
    
    TreeNode<TreeContainer>** getLeft() {
        return& left;
    };
    
    TreeNode<TreeContainer>** getRight() {
        return &right;
    };

    void setParent(TreeNode<TreeContainer>* addr) {
        parent = addr;
    };

    void setLeft(TreeNode<TreeContainer>* addr) {
        left = addr;
    };

    void setRight(TreeNode<TreeContainer>* addr) {
        right = addr;
    };

};

template<class TreeContainer>
class Tree {

private:
    TreeNode<TreeContainer> *root;

public:
    Tree<TreeContainer>() {};
    
    void add(TreeContainer value) {
        TreeNode<TreeContainer> *tContainer = new TreeNode<TreeContainer>(value);
        TreeNode<TreeContainer> **pointer = &root;
        TreeNode<TreeContainer> *tParent=NULL;
        while (1) {
            if (*pointer == NULL) {
                *pointer = tContainer;
                tContainer->setParent(tParent);
                return;
            }
            else if ((*pointer)->getData() > tContainer->getData()) {
                tParent = *pointer;
                pointer = (*pointer)->getLeft();
            }
            else {
                tParent = *pointer;
                pointer =(*pointer)->getRight();
            }
        }
    };
    
    void print() {
        root->print();
    };
};

void main() {
    Tree<int> tree;
    for (int i = 0; i < 5; i++) {
        int input;
        std::cin >> input;
        tree.add(input);
    }
    tree.print();
    getchar();
    getchar();
}