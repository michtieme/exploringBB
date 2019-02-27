#include <iostream>
#include <string>

void printString(const std::string& stringToPrint)
{

        std::cout << stringToPrint << "\n";
}

const char* tr(const char* stringToTranslate)
{
        printString("Translated ");
        return stringToTranslate;
}

void printSomeFunc()
{
        std::string myString(tr("Some String"));
        std::string myStringA{"Some String A"};
        std::string myStringB = "Some string B";

        printString(myString);
        printString(myStringA);
        printString(myStringB);
}

int main(int argc, char *argv[]){
   printSomeFunc();
   std::cout << "Hello World!" << std::endl;
   return 0;
}
