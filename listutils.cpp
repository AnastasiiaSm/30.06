#include <iostream>

struct Node {
  int val;
  Node* next;
};

// Инициализации элемента односвязного списка нулями

void init(Node* node) {
	node->val = 0;
	node->next = NULL;
}

// Отображения односвязного списка на экран
void show(Node* head) {
	Node *print = head;
	while (print != NULL)
	{
		std::cout << print->val << " ";
		print = print->next;
	}
	std::cout << std::endl;
}

// Добавления элемента в односвязный список
void pushNode(Node* head,Node* node) {
	Node* element = head;
	while (element->next != NULL) 
		element = element->next;
	element->next = new Node;
	element = element->next;
	element->val = node->val;
}


// Написать функцию инициализации size элементов списка заданным значением val.
void initList(Node* head, int size, int val)  {

}

// Написать функцию копирования элементов массива source в новый массив dest
void copyMas(Node* source, Node* dest) {

}
  

// Написать функцию сравнение списков source и dest. Если списки равны 0, если не равны -1
int compareMas(Node* source, Node* dest) {
  return 0;
}


// Написать функцию удаления со сдвигом влево n-го элемента списка.
void deleteList(Node* head,int n) {

}


// Написать функцию сдвига значений вправо на n-элементов с заполнением крайних элементов нулями
void rShiftList(Node* head,int n) {

}



// Написать функцию сдвига значений влево на n-элементов с заполнением крайних элементов нулями.
void lShiftList(Node* head,int n) {

}


//Написать функцию сдвига значений влево на n-элементов с переносом вытесненных элементов в конец
void lRoundShiftMas(Node* head,int n, int size) {

}


// Написать функцию вычисления среднего значения элементов списка.
int averageList(Node* head, int size) {
  return 0;
}



// Написать функцию вычисления средне квадратического отклонения элементов списка.
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
