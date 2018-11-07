#pragma once

//#include <boost/interprocess/shared_memory_object.hpp>
#include <list>
#include <string>
using namespace std;
class SharedMemory { }; // This should return methods for read and write, and ptr to change vals
template <typename F>
class SharedMemoryInterface {
public:
    virtual SharedMemory create(string key, string obj) = 0; // Can object be a JSON struct, therefore any type allowed ?
    virtual SharedMemory open(string key, string obj) = 0;
    virtual void subscribe(string key, F callback) = 0; // Callback should be [] (string obj) { do something};
    virtual void unsubscribe(string key);
private:
    list<string> keys;

};


double add_numbers(const double f1, const double f2);

double subtract_numbers(const double f1, const double f2);

double multiply_numbers(const double f1, const double f2);

