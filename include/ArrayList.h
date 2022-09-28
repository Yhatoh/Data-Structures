#define MAXSIZE 1000000

typedef int t_elem_list;

class ArrayList {
  private:
    unsigned int max_size;
    unsigned int list_size;
    unsigned int curr;
    t_elem_list* list_array;
  public:
    ArrayList();
    ~ArrayList();

    void clear();
    int insert(t_elem_list item);
    int append(t_elem_list item);
    t_elem_list erase();
    void move_to_start();
    void move_to_end();
    void next();
    void prev();
    int length();
    int curr_pos();
    void move_to_pos(int pos);
    t_elem_list get_value();
};
