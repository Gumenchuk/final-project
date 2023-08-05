#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>

using namespace std;
int main(){
  fstream file("C://it-academy//MAIN PROJECT//main//cart(purchase)//index.html");
  ofstream file_copy("temp.file");
  string s;
  while(file.good()){
  	getline(file,s);
  	file_copy<<s<<endl;
  }
  file.close();
  file_copy.close();
  fstream file_read("temp.file");
  ofstream file_write("C://it-academy//MAIN PROJECT//main//cart(purchase)//index.html");
  int k;
  string kurs;
  cin>>kurs;
  while(file_read.good()){
  	getline(file_read,s);
  	size_t found = s.find("id=\"123");
    if (found!=std::string::npos)
  	{
  		s="		<div class=\"dollar_number\" id=\"123\">$"+kurs+"</div>";
	}
	  file_write<<s<<endl;
  }
  file_read.close();
  file_write.close();
  remove("temp.file");
  return 0;
}

