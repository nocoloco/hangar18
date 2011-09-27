#include <iostream>
#include <stdlib.h>
using namespace std;

template <class E>
class Node {
	private:
		E element;
		Node<E> *next;

	public:
		Node(E e, Node<E> *n){
			element = e;
			next = n;
		};
		E getElement(){
			return element;
		}
		Node<E> getNext(){
			return next;
		}
		void setElement(E el){
			element = el;
		}
		void setNext(Node<E> n){
			next = n;
		}
		void print(){
			cout << element;
		}
};

template <class E>
class SLinkedList {
	private:
		Node<E> *head;
		Node<E> *tail;
		long size;
	public:
		SLinkedList(){
			head = NULL;
			tail = NULL;
			size = 0;
		}
		bool isEmpty(){
			if(head == NULL)
				return true;
			return false;
		}
		void addFirst(E el){
			Node<E> *newNode = new Node<E>(el,head);
			head = newNode;
			size++;
			if(size == 1){
				tail = head;
			}
		}
		Node<E> getFirst(){
			return *head;
		}
};

int main(){
	SLinkedList<int> *list = new SLinkedList<int>();
	list->addFirst(1);
	list->addFirst(6);
	list->getFirst().print();
	return 0;
}
