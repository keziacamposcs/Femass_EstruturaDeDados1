//#include <iostream>
#include "genBST.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//using namespace std;

int main(int argc, char** argv) {
	BST <int> arv;
	arv.insert(5);
	arv.insert(4);
	arv.insert(8);
	arv.insert(7);
	arv.insert(10);
	arv.inorder();
	cout<<endl;
	arv.preorder();
	cout<<endl;
	arv.postorder();
	cout<<endl;
	system("pause");
	return 0;
}
