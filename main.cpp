#include <unistd.h>
#include <iostream>
#include <list>
#include <iterator>
#include <vector>
#include <fstream>

using namespace std;

class Compiler
{
  public:
    //std::vector<string> getCode(string name);
    void getCode(string name);
    void preprocessing();
    std::vector<string> codeRaw, code;
  private:

};

//std::vector<string> Compiler::getCode(string name){
void Compiler::getCode(string name)
{
  string line;
  ifstream myfile ("Testes/test.asm");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      cout << line << '\n';
      this->codeRaw.push_back(line);
    }
    myfile.close();
  }
  else cout << "Unable to open file";
}

void Compiler::preprocessing()
{
  string line;
  for(int i = 0; i < this->codeRaw.size() ; i++){
        
  }
}

int main(int argc, char* argv[])
{
  std::vector<string> code;
  Compiler com;
  //code = com.getCode("test.asm");
  com.getCode("test.asm");
  com.preprocessing();
  cout<< com.codeRaw[0] << endl;

  return 0;
}

/*
std::list<int> s;
s.push_back(1);
std::list<int>::iterator it = s.begin();

while(it != s.end())
{
  std::cout<<(*it)<<"  ";
  it++;
}
std::cout<<std::endl;
*/