#include <iostream>

#include <LinkedList.h>

LinkedList::LinkedList(){
  head = tail = curr = new Node;
  list_size = 0;
  pos = 0;
}

LinkedList::~LinkedList(){
  clear();
  delete head;
}

void LinkedList::clear(){
  Node* aux;
  curr = head;
  for(int i = 0; i < list_size; i++){
    aux = curr;
    curr = curr->next;
    delete aux;
  }
  delete curr;
  head = tail = curr = new Node;
  list_size = 0;
  pos = 0;
}

int LinkedList::insert(t_elem_list item){
  Node* aux = curr->next;
  curr->next = new Node;
  curr->next->data = item;
  curr->next->next = aux;
  if(curr == tail) tail = curr->next;
  list_size++;
  return pos;
}

int LinkedList::append(t_elem_list item){
  tail->next = new Node;
  tail->next->data = item;
  tail->next->next = nullptr;
  tail = tail->next;
  list_size++;
  return 1;
} 

t_elem_list LinkedList::erase(){
  Node* aux = curr->next;
  curr->next = curr->next->next;
  t_elem_list ret = aux->data;
  delete aux;
  return ret;  
}

void LinkedList::move_to_start(){ curr = head; pos = 0; }

void LinkedList::move_to_end(){ curr = tail; pos = list_size; }

void LinkedList::next(){
  if(curr != tail){
    curr = curr->next;
    pos++;
  }
}

void LinkedList::prev(){
  Node* temp;
  if(curr == head) return;
  temp = head;
  while(temp->next != curr) temp = temp->next;
  curr = temp;
  pos--;
}

int LinkedList::length(){
  return list_size;
}

unsigned int LinkedList::curr_pos(){
  return pos;
}

void LinkedList::move_to_pos(int pos){
  if(pos < 0 || pos > list_size) return;
  curr = head;
  pos = 0;
  unsigned int i;
  for(i = 0; i < pos; i++){
    curr = curr->next;
    pos++;
  }
}

t_elem_list LinkedList::get_value(){
  return curr->next->data;
}

std::ostream& operator<<(std::ostream& stream, const LinkedList &list){
  std::cout << "[";
  if(list.list_size == 0){
    std::cout << "]\n";
    return stream;
  }
  
  for(Node* aux = list.head; aux->next != list.tail; aux = aux->next){
    std::cout << aux->next->data << ", ";
  }
  std::cout << list.tail->data << "]\n";
  return stream;
}
