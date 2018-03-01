#include<fstream>
#include<string>

class Queue {

 public:
  

<<<<<<< HEAD
  Queue (std::string file);    //constructor
=======
  Queue (std::ifstream &ifile);    //constructor
>>>>>>> 748fa350463ae50c2cf4a8e6d213f4a4c1f2cf22
  
  ~Queue();                        //Distructor

  void displayQueue ();
  void enQueue( double num);      //Inserting in array
  double deQueue();               //deleting from array
  


 private:
  int N;
  double num;
  double* arr;
  char cama;    //,
  int ReadPointer;
  int WritePointer;
  std::ifstream ifile;

};
