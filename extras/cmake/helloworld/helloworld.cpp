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
	
	//Should match because the string literals are not wrapped in either tr() or no_tr()
        QString myStringA{"Some String A"};
        QString myStringB = "Some string B";

	//Should NOT match because the literals are wrapped in tr() or no_tr()
        QString myTranslation(tr("Some String"));
        QString myUntranslatedString(no_tr("No translation"));

	//Should NOT match because the type is std::string, we only want to match QString
	std::string aStdStringA{"Some string"};
	std::string aStdStringB("Some string"); 
	std::string aStdStringC(tr("Some string"));
        
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
