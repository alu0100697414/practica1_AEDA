#include "vector.hpp"

Vector::Vector(int sz):v_(NULL),sz_(sz){
  v_ = new TDATO[sz_];
}

Vector::~Vector(void){
  if (v_ != NULL){
    delete [] v_;
    v_ = NULL;
  }
}

TDATO Vector::get_v(int pos){
  return v_[pos];
}

void Vector::set_v(int pos, TDATO val){
  v_[pos] = val;
}

int Vector::get_sz(void){
  return sz_;
}
