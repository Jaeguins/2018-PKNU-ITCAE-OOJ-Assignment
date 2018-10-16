#include <iostream>
template<class TreeData>
class TreeNode {
private:
    float standard;
    TreeData data;
    TreeNode<TreeData>*left, *right;
public:
    TreeNode(float standard, TreeData value) { this->standard = standard; data = value; };
    TreeData getData() {return data;};
    void print() {
		if (left != NULL) left->print();
        std::cout << data<<" ";
        if (right != NULL) right->print();
    }
	float getStandard() {return standard;};
    TreeNode<TreeData>** getLeft() {return& left;};
    TreeNode<TreeData>** getRight() {return &right;};
    void setStandard(float standard) {this->standard=standard;};
    void setLeft(TreeNode<TreeData>* addr) {left = addr;};
    void setRight(TreeNode<TreeData>* addr) {right = addr;};
};
template<class TreeData>
class Tree {
private:
    TreeNode<TreeData> *root;
public:
    Tree<TreeData>() {};
    void add(float standard,TreeData value) {
        TreeNode<TreeData> *tContainer = new TreeNode<TreeData>(standard,value);
        TreeNode<TreeData> **pointer = &root;
        while (1) {
            if (*pointer == NULL) { *pointer = tContainer; return; }
            else pointer = ((*pointer)->getStandard() > tContainer->getStandard()) ? (*pointer)->getLeft() : (*pointer)->getRight();
        }
    };
    void print() {root->print();};
};
void main() {
    Tree<float> tree;
    for (int i = 0; i < 5; i++) {
        float input;
        std::cin >> input;
        tree.add(input,input);
    }
    tree.print();
    getchar();
    getchar();
}