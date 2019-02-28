#include <iostream>
#include <string>

class QString
{
public:
QString() {}
QString(const char* sz) {}
};



void printString(const QString& /*stringToPrint*/)
{
//FIXME: Clang query doesn't like this:        std::cout << stringToPrint << "\n";
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
        QString myTranslation(tr("Some String"));
        QString myStringA{"Some String A"};
        QString myStringB = "Some string B";

	std::string aStdStringA{"Some string"};
	std::string aStdStringB("Some string");
	std::string aStdStringC(tr("Some string"));


        QString myUntranslatedString(no_tr("No translation"));

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
