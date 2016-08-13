/* Clase vector */
#pragma once

#include <iostream>
#include "dato.hpp"

class Vector {

private:

  TDATO* v_;
  int sz_;

public:

  Vector(int sz);
  ~Vector(void);

  TDATO get_v(int pos);
  void set_v(int pos, TDATO val);

  int get_sz(void);

};
