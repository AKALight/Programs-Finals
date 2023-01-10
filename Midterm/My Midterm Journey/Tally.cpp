  #include <iostream>
using namespace std;

class TallyCounter {
  private:
      int people; 
  public:
      TallyCounter (); 
      void Clear ( int people = 0);
      void AddPerson ()
      {
          people ++; 
      }
      void GetValue () const; 
      {
        return people;  
      }     
  };

int main () {
    TallyCounter Counter1;
    Counter1.Clear();
    Counter1.AddPerson;
    Counter1.GetValue; 
  return 0;
}
