#include <iostream>
#include <cstdlib>//for "exit()" on some systems
#include <vector>
#include <string>

using namespace std;

/**
\fn linearSearch
\brief Search data for the first occurrence of key
\param [in] key The value being searched for
\param [in] data The data set that will be searched
\returns location of key if found or -1 if not found
*/

void insertionSort(auto& inputs)
{
	for(int i=1; i < inputs.size(); i++)
	{
		int j=i;
		while(j<0&&(inputs[j]<inputs[j-1]))
		{
			swap(inputs[j],inputs[j-1];
			j--;
		}
	}
}

int main()
{
  vector<string> inputs; 
  string search_key, input;
  int result;

   cout<<"Welcome to \"sort it\". We first need some input data."<<endl;
   cout<<"We'll assume the inputs do not have any spaces."<<endl<<endl;
   cout<<"To end input type the #-character (followed by Enter)"<<endl<<endl;

   cin>>input;
 
    while(input != "#")//read an unknown number of inputs from keyboard
    {
       inputs.push_back(input);
       cin>>input;
    }

   cout<<endl<<"["<<inputs.size()<<" values read from input source]"<<endl<<endl;

  if(inputs.size() == 0)//no input
  {
      cout<<endl<<"No input received, quiting..."<<endl<<endl;
       exit(1);//nothing to do but quit program
  }
 
   insertionSort(inputs);
 
	for(int i=0;i<=inputs.size();i++)
	{
		cout<<i;
	}

	
   cout<<endl<<"Program \"search it\" is now finished."<<endl<<endl;

    return 0;
}
