#include <iostream>
#include <string>

void printString(const std::string& stringToPrint)
{

        std::cout << stringToPrint << "\n";
}

const char* tr(const char* pStringToTranslate)
{
        printString("Translated ");
        return pStringToTranslate;
}

constexpr const char* no_tr(const char* pStringToTranslate)
{
        return pStringToTranslate;
}

void printSomeFunc()
{
        std::string myTranslation(tr("Some String"));
        std::string myStringA{"Some String A"};
        std::string myStringB = "Some string B";


        std::string myUntranslatedString(no_tr("No translation"));

        printString(myTranslation);
        printString(myStringA);
        printString(myStringB);
        printString(myUntranslatedString);
}

int main(int argc, char *argv[]){
   printSomeFunc();
   std::cout << "Hello World!" << std::endl;
   return 0;
}
