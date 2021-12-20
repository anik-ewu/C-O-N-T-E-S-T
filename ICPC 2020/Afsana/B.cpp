///Problem No : 2
///Language   : C++

#include <bits/stdc++.h>
using namespace std;


/*struct Node{
	int data;
	struct Node *left, *right;
};*/

//Considering that there is a tree similar to above structure


/// Function to find the maximum sum of a level in tree
int maxLevelSum(struct Node* root){
	if (root == NULL)return 0;
	int result = root->data;
	queue<Node*> q;
	q.push(root);
	while (!q.empty()){
		int count = q.size();
		int sum = 0;
		while (count--){
			Node* temp = q.front();
			q.pop();
			sum = sum + temp->data;
			if (temp->left != NULL)
				q.push(temp->left);
			if (temp->right != NULL)
				q.push(temp->right);
		}
		result = max(sum, result);
	}
	return result;
}


/// Function to find the minimum sum of a level in tree
int maxLevelSum(struct Node* root){
	if (root == NULL)return 0;
	int result = root->data;
	queue<Node*> q;
	q.push(root);
	while (!q.empty()){
		int count = q.size();
		int sum = INT_MAX;
		while (count--){
			Node* temp = q.front();
			q.pop();
			sum = sum + temp->data;
			if (temp->left != NULL)
				q.push(temp->left);
			if (temp->right != NULL)
				q.push(temp->right);
		}
		result = min(sum, result);
	}
	return result;
}

int main(){

	cout << "Maximum level sum is " << maxLevelSum(root)<< endl;
	cout << "Minimum level sum is " << minLevelSum(root)<< endl;


	return 0;
}
