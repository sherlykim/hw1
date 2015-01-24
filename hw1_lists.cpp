#include <iostream>
#include <ifstream>
#include <ofstream>
#include <cstring> 

using namespace std; 

struct Item{
  Item(int v, Item* n){
    val = v; 
    next = n;
  }
  int val;
  Item* next;
};

Item* concantenate(Item* head1, Item* head2);
void removeEvens(Item*& head);
double findAverage(Item* head);
void readLists(Item*& head1, Item*& head2)
void printList(std::ostream& ofile, Item* head);
int getsize(Item* head);

int getsize(Item* head){

  int counter = 0;
  Item* pointer = head;
  while(pointer->next != NULL){
    counter++;
    pointer = pointer->next;
  }
  return counter;
}

Item* concantenate(Item* head1, Item* head2)
{
  Item* buffer;
  if(head1 == NULL)//base case 1
    return head2;
  if(head2 == NULL)//base case 2
    return head1;
  else{
    if(head2 != NULL)
      {buffer = head1;}
    while(buffer->next != NULL){//until it hits NULL
    buffer = buffer->next;//move buffer at the end of head2
    buffer->next = head2;//it will add head 2.
    }
  }
}

void removeEvens(Item*& head){
  if(head1 == NULL)
    { cout << "The List is Empty" << endl;}
  else{
    for(int i = 0; i < list.getsize; i++)
      { 
        if(list.get(i)%2==0)
        {
          list.remove(i);
        }
      }
    }
  }
}
  
double findAverage(Item* head){
  double avg = 0.0;
  double sum = 0.0;
  int count; 
  if (my_file)
    my_file>>num;

  while (my_file)
  {
    sum += num;
    count++;
    my_file>>num;
  }
  if(cout > 0)
  {
    avg = sum/count;
    cout << "The average of the numbers is: " << avg << endl;
    }
  }
  }
}

void printList(std::ostream& ofile, Item* head){
  if(head == NULL)
    ofile << std::endl;
  else{
    ofile << head->val << " ";
    printList(ofile, head-> next);
  }
}

int main(int argc, char* argv[]){
  Item list; 
  string text;
  int count;
  int numbers;
  ifstream my_file ("input.txt");
  if(ifile.fail()){
    cout << "Couldn't open file" << endl;
    return 1;
  }
  if(my_file.is_open())
  {
    while(getline (my_file,text))
    {
      count++;
    }
    for(int i=0; i <= count; i++){
      stringstream(text) = numbers;
      numbers[i];
    }
  }
  ofstream out_file("output.txt");
  if (out_file.is_open())
  {
    head3 = concantenate(head1, head2);
    out_file << head3; 
    out_file << removeEvens(head3);
    out_file << findAverage(head3);
    out_file.close();
  }

}