#include "Zoo.h"
#include "Animal.h"

Zoo::Zoo() : capacity(10) {}

int Zoo::AddAnimal(const string& date){
    int day, month, year;
    sscanf(date.c_str(), "%d/%d/%d", &day, &month, &year);
    int convertDate = day + month * 100 + year * 10000;
    return convertDate;
}