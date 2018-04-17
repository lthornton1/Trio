#include <iostream>
using namespace std;

void rearangeNum (int &,int &, int &);

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA


  rearangeNum(red,green,blue);


  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}

void rearangeNum (int &first, int &second, int &third)
{
  int temp1 = first;
  int temp2 = second;
  int temp3 = third;

  if (temp1<temp2 && temp1<temp3)
  {
    third = temp1;
  }
  else if ((temp1<temp2 && temp1>temp3) || (temp1>temp2 && temp1<temp3))
  {
    second = temp1;
  }

  if (temp2<temp1 && temp2<temp3)
  {
    third = temp2;
  }
  else if (temp2>temp1 && temp2>temp3)
  {
    first = temp2;
  }

  if ((temp3<temp1 && temp3>temp2) || (temp3>temp1 && temp3<temp2))
  {
    second = temp3;
  }
  else if (temp3>temp1 && temp3>temp2)
  {
    first = temp3;
  }
}


