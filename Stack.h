#include "LinkedList.h"

//1. ���ø� Ŭ������ Ȯ���ؾ���
//2. Stack�������� Delete �Լ� �������ؾ���
//����: first, current_size�� class�� ��� �����̱� ������ this �����͸� ����Ͽ� �����;���

//LinkedList class�� ��ӹ���
template <typename T>
class Stack : public LinkedList<T> {
public:
	bool Delete(T& element) {
		//first�� 0�̸� false��ȯ

		Node<T>* current = this->first;

		if (this->first = 0)           // LinkedList�� �޸� Stack�� current�� ����Ű�� ���� ����
			return false;
		else {
			if (current->link) {

				this->first = current->link;
				current->link = 0;
			}
			else {
				this->first = this->first->link;
			}
			this->current_size--;
			return true;
		}
	}
};

