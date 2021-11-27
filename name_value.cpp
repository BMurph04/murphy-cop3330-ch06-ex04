#include "name_value.h"
using namespace std;

Name_value::Name_value(string name, int value){
    setName_value(name, value);
}

void Name_value::setName_value(string name, int value){
    Name_value::name = name;
    Name_value::value = value;
}