
#include <iomanip>
#include<iostream>
#include <fstream>
#include"Queue.h"
#include<string>


int main(){
<<<<<<< HEAD
  

 Queue q{"Queue.txt"};
=======
std::ifstream ifile{"Queue.txt",std::ios::app};

 Queue q{ifile};
>>>>>>> 748fa350463ae50c2cf4a8e6d213f4a4c1f2cf22

    // Display elements present in Circular Queue
   q.displayQueue();

    // Inserting elements in Circular Queue
     q.enQueue(15.5);
     q.enQueue(-6);

   q.displayQueue();
 
    // Deleting elements from Circular Queue
   
     std::cout<<"Deleted value = "<< q.deQueue() << std::endl;
     std::cout<<"Deleted value = "<< q.deQueue() << std::endl;
     
 
      q.displayQueue();
  

     return 0;
}
