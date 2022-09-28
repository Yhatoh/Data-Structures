#include <ArrayList.h>

ArrayList::ArrayList(){
  max_size = 1000000;
  list_size = 0;
  curr = 0;
  list_array = new t_elem_list[max_size];
}

ArrayList::~ArrayList(){
  delete[] list_array;
}

void ArrayList::clear(){
  curr = list_size = 0;
}

int ArrayList::insert(t_elem_list item){
  if(list_size >= max_size){
    return -1;
  }

  int i;
  for(i = list_size; i > curr; i--){
    list_array[i] = list_array[i - 1];
  }

  list_array[i] = item;
  list_size++;
  return i;
}

int ArrayList::append(t_elem_list item){
  if(list_size >= max_size){
    return 0;
  }

  list_array[list_size++] = item;
  return 1;
}

t_elem_list ArrayList::erase(){
  t_elem_list item;
  if(curr < 0 || curr >= list_size){
    return -1;
  }

  item = list_array[curr];
  for(int i = curr; i < list_size - 1; i++){
    list_array[i] = list_array[i + 1];
  }

  list_size--;
  return item;
}

void ArrayList::move_to_start(){ curr = 0; }

void ArrayList::move_to_end(){ curr = list_size; }

void ArrayList::prev(){ if(curr != 0) curr--; }

void ArrayList::next(){ if(curr < list_size) curr++; }

int ArrayList::length(){
  return list_size;
}

int ArrayList::curr_pos(){
  return curr;
}

void ArrayList::move_to_pos(int pos){
   curr = pos;
}

t_elem_list ArrayList::get_value(){
  return list_array[curr];
}
