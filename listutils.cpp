#include <iostream>

struct Node {
  int val;
  Node* next;
};

// ������������� �������� ������������ ������ ������

void init(Node* node) {
	node->val = 0;
	node->next = NULL;
}

// ����������� ������������ ������ �� �����
void show(Node* head) {
	Node *print = head;
	while (print != NULL)
	{
		std::cout << print->val << " ";
		print = print->next;
	}
	std::cout << std::endl;
}

// ���������� �������� � ����������� ������
void pushNode(Node* head,Node* node) {
	Node* element = head;
	while (element->next != NULL) 
		element = element->next;
	element->next = new Node;
	element = element->next;
	element->val = node->val;
}


// �������� ������� ������������� size ��������� ������ �������� ��������� val.
void initList(Node* head, int size, int val)  {

}

// �������� ������� ����������� ��������� ������� source � ����� ������ dest
void copyMas(Node* source, Node* dest) {

}
  

// �������� ������� ��������� ������� source � dest. ���� ������ ����� 0, ���� �� ����� -1
int compareMas(Node* source, Node* dest) {
  return 0;
}


// �������� ������� �������� �� ������� ����� n-�� �������� ������.
void deleteList(Node* head,int n) {

}


// �������� ������� ������ �������� ������ �� n-��������� � ����������� ������� ��������� ������
void rShiftList(Node* head,int n) {

}



// �������� ������� ������ �������� ����� �� n-��������� � ����������� ������� ��������� ������.
void lShiftList(Node* head,int n) {

}


//�������� ������� ������ �������� ����� �� n-��������� � ��������� ����������� ��������� � �����
void lRoundShiftMas(Node* head,int n, int size) {

}


// �������� ������� ���������� �������� �������� ��������� ������.
int averageList(Node* head, int size) {
  return 0;
}



// �������� ������� ���������� ������ ��������������� ���������� ��������� ������.
int skoFromList(Node* head, int size) {
  return 0;
}


int testSkoFromList() {
  return -1;
}


static void runTest(int (*testFunction)(),const std::string& testName)
{
  if(testFunction()==0)
    std::cout << "Test "<< testName << " - OK" << std::endl;
  else 
    std::cout << "Test "<< testName << " - FAIL" << std::endl;
}



int main() {
  runTest(testSkoFromList,"testSkoFromList");


}
