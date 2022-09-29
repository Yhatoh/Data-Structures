#include <iostream>

typedef int t_elem_list;

struct Node {
  t_elem_list data;
  Node* next;
};

class LinkedList {
  private:
    Node* head;
    Node* tail;
    Node* curr;
    unsigned int list_size;
    unsigned int pos;
  public:
    LinkedList();
    ~LinkedList();

    void clear();
    int insert(t_elem_list item);
    int append(t_elem_list item);
    t_elem_list erase();
    void move_to_start();
    void move_to_end();
    void next();
    void prev();
    int length();
    unsigned int curr_pos();
    void move_to_pos(int pos);
    t_elem_list get_value();
    friend std::ostream& operator<<(std::ostream& os, const LinkedList &list);
};
