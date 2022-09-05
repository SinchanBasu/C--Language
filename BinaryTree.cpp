#include<bits/stdc++.h>
#include<vector>
#include<queue>
#include<algorithm>
#include<stack>
#include<map>
#include<iostream>

using namespace std;

class TreeNode {
	public:
	int data;
	TreeNode *left;
	TreeNode *right;
	TreeNode() {
		data = 0;
		left = NULL;
		right = NULL;
	}
	TreeNode(int data) {
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

TreeNode* create() {
	/*TreeNode *root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);
	root->left->left = new TreeNode(4);
	root->left->right = new TreeNode(5);
	root->right->left = new TreeNode(6);
	root->right->right = new TreeNode(7);*/
	cout << "Enter data" << endl;
	int data;
	cin >> data;
	if(data == -1) {
		return NULL;
	}
	TreeNode *root = new TreeNode(data);
	root->left = create();
	root->right = create();
	return root;
}

void preorder(TreeNode* root) { // root left right
	if(root == NULL) {
		return;
	}
	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
	return;
}

void inorder(TreeNode *root) { // left root right
	if(root == NULL) {
		return;
	}
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
	return;
}

void postorder(TreeNode *root) { // left right root
	if(root == NULL) {
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout << root->data << " ";
	return;
}

void levelOrder(TreeNode* root) {
	if(root == NULL) {
		return;
	}
	queue<TreeNode*> q;
	q.push(root);
	while(q.empty() != true) {
		int size = q.size();
		for(int i=0; i<size; i++) {
			TreeNode *temp = q.front();
			q.pop();
			cout << temp->data << " ";
			if(temp->left != NULL) {
				q.push(temp->left);
			}
			if(temp->right != NULL) {
				q.push(temp->right);
			}
		}
		cout << endl;
	}
}

int main() {
	TreeNode *root = create();
	preorder(root);
	cout << endl;
	inorder(root);
	cout << endl;
	postorder(root);
	cout << endl;
	levelOrder(root);
	cout << endl;
	return 0;
}
