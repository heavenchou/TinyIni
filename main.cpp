#include "main.h"

int main(int argc, char* argv[])
{
    // 取得目前目錄

    string sFile = argv[0];
    sFile = sFile.substr(0,sFile.find_last_of("\\/"));
    sFile = sFile + "/test.ini";

    CTinyIni * myIni = new CTinyIni(sFile);

    string s = myIni->ReadString("string", "123");
    bool b = myIni->ReadBool("bool", true);
    int i = myIni->ReadInt("int", 123);

    string s1 = myIni->ReadString("string1", "123");
    bool b1 = myIni->ReadBool("bool1", true);
    int i1 = myIni->ReadInt("int1", 123);

    string s2 = myIni->ReadString("string2", "123");
    bool b2 = myIni->ReadBool("bool2", true);
    int i2 = myIni->ReadInt("int2", 123);

    cout << "string : " << s << endl;
    cout << "bool : " << b << endl;
    cout << "int : " << i << endl;
    cout << "string : " << s1 << endl;
    cout << "bool : " << b1 << endl;
    cout << "int : " << i1 << endl;
    cout << "string : " << s2 << endl;
    cout << "bool : " << b2 << endl;
    cout << "int : " << i2 << endl;

    return 0;
}

