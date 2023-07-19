# Header-ASCII
A "simple" library of ASCII codes in cpp

anything wrong,send an E-mail to SC-ON@hotmail.com


now,the version is 1.2.5.


  # How To Use

  ## For Dev-C++
  
  just find your file folder of Dev-Cpp(mine is in C:\Program Files (x86)\Dev-Cpp\MinGW64\lib\gcc\x86_64-w64-mingw32\8.1.0\include\c++),add any of file "ASCII.h" or file "ASCII",then use my "test.cpp" to test if the header is successfully installed.
  
  if you seen
  
    character:a number:97 bin:01100001 oct:141 hex:61
    character:  number:32 bin:00100000 oct:40 hex:20
    ! to Num: 33. 33 to character: !


    
  on your window,then its all right

    

  ## For Visual Studio
  
  add any of file "ASCII.h" or file "ASCII" to your projects file folder "header",then use my "test.cpp" to test if the header is successfully installed.

  if you seen
  
    character:a number:97 bin:01100001 oct:141 hex:61
    character:  number:32 bin:00100000 oct:40 hex:20
    ! to Num: 33. 33 to character: !


    
  on your window,then its all right


  ## API

  To use my header ASCII,you need to do the same work above to your IDE,Code Editor(anything wrong,send an E-mail to SC-ON@hotmail.com),and write

    #include<iostream>
    #include<ASCII>// or #include<ASCII.h>
    //and outher headers...
    
    using namespace std;
    
    int main(){
        ASCII ascii;
        //code here
    }


  ### For class ASCII
  and you needs to know all of the functions in class ASCII
  
    ASCII setInt(int num);
	ASCII setChar(char character);
	int toInt();
	char toChar();
	std::string toBin();
	std::string toOct();
	std::string toHex();


  and here we go:
  
    ASCII setInt(int num)

  its a function to set your ASCII variable to set its value with num,return "*this",
  like:

    ascii.setInt(97);

  next:

    ASCII setChar(char character)

  its a function to set your ASCII variable to set its value with character,return "*this",
  like:
  
    ascii.setChar('a');


  next:

    int toInt()

  its a function to return your ASCII's number,
  like:

    ascii.setInt(97);
    cout<<ascii.toInt();//97

  next:

    char toChar()

  its a function to return your ASCII's character,
  like:

    ascii.setChar('a');
    cout<<ascii.toChar();//a

  next:

    std::string toBin()

  its a function to return your ASCII's number in binary(8 bit)，
  like:

    ascii.setInt(97);
    cout<<ascii.toBin();//01100001

  next:

    std::string toOct()

  its a function to return your ASCII's number in octal，
  like:

    ascii.setInt(97);
    cout<<ascii.toOct();//141

  next:

    std::string toHex()

  its a function to return your ASCII's number in hexadecimal，
  like:

    ascii.setInt(97);
    cout<<ascii.toHex();//61


### For Other

	int changeToNum(char character);
  	char changeToCharacter(int number);

   and here we go:

    int changeToNum(char character)

its a function to return the ASCII number of character,
like:

     cout<<changeToNum('!');//33

next:

    char changeToCharacter(int number)
   	
its a function to return the ASCII character of number,
like:

    cout<<changeToCharacter(33);//!


     
