// Lawrence Scroggs CS202 Program 2 05/01/19

// This file will hold the abstract base class
// This will hold all the information on the customer
// and will have virtual functions that all the classes will 
// use within the derived classes and pointers to 
// create the circular linked list


#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;


// abstract base class
class customer{

  public:

    virtual char * get_name() = 0;
    virtual char * get_address() = 0;
    virtual char * get_type() = 0;
    virtual char * get_contents() = 0;


  protected:

    customer();
    ~customer();

    char * name;
    char * address;
    char * d_type; // delivery type
    char * contents;

    customer * rear;
    customer * next;


};