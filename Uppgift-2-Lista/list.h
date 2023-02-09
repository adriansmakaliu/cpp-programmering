class List
{
public:
  List();
  void insert(int val);
  void delete(int val);
  int get(int index) const;
  int size() const;

private:
  class Element
  {
    int value;
    Element* next;
    Element* prev;
  }
  Element* first;
  Element* last;
  }
