#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int choice;
    string filename, output, content;
    cout << "1 - encrypt file\n2 - decrypt DUPA file\n>";
    cin >> choice;

    if (choice == 1)
    {
        cout << "enter file you want to encrypt\n>";
        cin >> filename;
        ifstream File(filename);

        while (getline (File, content))
        {
            for (int i = 0; content[i]; i++)
            {
                if (content[i] == 'a'){output.push_back('g');}
                else if (content[i] == 'A'){output.push_back('G');}
                else if (content[i] == 'b'){output.push_back('q');}
                else if (content[i] == 'B'){output.push_back('Q');}
                else if (content[i] == 'c'){output.push_back('w');}
                else if (content[i] == 'C'){output.push_back('W');}
                else if (content[i] == 'd'){output.push_back('k');}
                else if (content[i] == 'D'){output.push_back('K');}
                else if (content[i] == 'e'){output.push_back('t');}
                else if (content[i] == 'E'){output.push_back('T');}
                else if (content[i] == 'f'){output.push_back('o');}
                else if (content[i] == 'F'){output.push_back('O');}
                else if (content[i] == 'g'){output.push_back('a');}
                else if (content[i] == 'G'){output.push_back('A');}
                else if (content[i] == 'h'){output.push_back('v');}
                else if (content[i] == 'H'){output.push_back('V');}
                else if (content[i] == 'i'){output.push_back('p');}
                else if (content[i] == 'I'){output.push_back('P');}
                else if (content[i] == 'j'){output.push_back('r');}
                else if (content[i] == 'J'){output.push_back('R');}
                else if (content[i] == 'k'){output.push_back('d');}
                else if (content[i] == 'K'){output.push_back('D');}
                else if (content[i] == 'l'){output.push_back('n');}
                else if (content[i] == 'L'){output.push_back('N');}
                else if (content[i] == 'm'){output.push_back('s');}
                else if (content[i] == 'M'){output.push_back('S');}
                else if (content[i] == 'n'){output.push_back('l');}
                else if (content[i] == 'N'){output.push_back('L');}
                else if (content[i] == 'o'){output.push_back('f');}
                else if (content[i] == 'O'){output.push_back('F');}
                else if (content[i] == 'p'){output.push_back('i');}
                else if (content[i] == 'P'){output.push_back('I');}
                else if (content[i] == 'q'){output.push_back('b');}
                else if (content[i] == 'Q'){output.push_back('B');}
                else if (content[i] == 'r'){output.push_back('j');}
                else if (content[i] == 'R'){output.push_back('J');}
                else if (content[i] == 's'){output.push_back('m');}
                else if (content[i] == 'S'){output.push_back('M');}
                else if (content[i] == 't'){output.push_back('e');}
                else if (content[i] == 'T'){output.push_back('E');}
                else if (content[i] == 'u'){output.push_back('y');}
                else if (content[i] == 'U'){output.push_back('Y');}
                else if (content[i] == 'v'){output.push_back('h');}
                else if (content[i] == 'V'){output.push_back('H');}
                else if (content[i] == 'w'){output.push_back('c');}
                else if (content[i] == 'W'){output.push_back('C');}
                else if (content[i] == 'x'){output.push_back('z');}
                else if (content[i] == 'X'){output.push_back('Z');}
                else if (content[i] == 'y'){output.push_back('u');}
                else if (content[i] == 'Y'){output.push_back('U');}
                else if (content[i] == 'z'){output.push_back('x');}
                else if (content[i] == 'Z'){output.push_back('X');}
                else (output.push_back(content[i]));
            }
        }
        File.close();
        ofstream FileToWrite("encrypted.DUPA");
        FileToWrite << output;
        FileToWrite.close();
    }
    else if (choice == 2)
    {
        cout << "enter file you want to decrypt\n>";
        cin >> filename;
        ifstream File(filename);

        while (getline (File, content))
        {
            for (int i = 0; content[i]; i++)
            {
                if (content[i] == 'a'){output.push_back('g');}
                else if (content[i] == 'A'){output.push_back('G');}
                else if (content[i] == 'b'){output.push_back('q');}
                else if (content[i] == 'B'){output.push_back('Q');}
                else if (content[i] == 'c'){output.push_back('w');}
                else if (content[i] == 'C'){output.push_back('W');}
                else if (content[i] == 'd'){output.push_back('k');}
                else if (content[i] == 'D'){output.push_back('K');}
                else if (content[i] == 'e'){output.push_back('t');}
                else if (content[i] == 'E'){output.push_back('T');}
                else if (content[i] == 'f'){output.push_back('o');}
                else if (content[i] == 'F'){output.push_back('O');}
                else if (content[i] == 'g'){output.push_back('a');}
                else if (content[i] == 'G'){output.push_back('A');}
                else if (content[i] == 'h'){output.push_back('v');}
                else if (content[i] == 'H'){output.push_back('V');}
                else if (content[i] == 'i'){output.push_back('p');}
                else if (content[i] == 'I'){output.push_back('P');}
                else if (content[i] == 'j'){output.push_back('r');}
                else if (content[i] == 'J'){output.push_back('R');}
                else if (content[i] == 'k'){output.push_back('d');}
                else if (content[i] == 'K'){output.push_back('D');}
                else if (content[i] == 'l'){output.push_back('n');}
                else if (content[i] == 'L'){output.push_back('N');}
                else if (content[i] == 'm'){output.push_back('s');}
                else if (content[i] == 'M'){output.push_back('S');}
                else if (content[i] == 'n'){output.push_back('l');}
                else if (content[i] == 'N'){output.push_back('L');}
                else if (content[i] == 'o'){output.push_back('f');}
                else if (content[i] == 'O'){output.push_back('F');}
                else if (content[i] == 'p'){output.push_back('i');}
                else if (content[i] == 'P'){output.push_back('I');}
                else if (content[i] == 'q'){output.push_back('b');}
                else if (content[i] == 'Q'){output.push_back('B');}
                else if (content[i] == 'r'){output.push_back('j');}
                else if (content[i] == 'R'){output.push_back('J');}
                else if (content[i] == 's'){output.push_back('m');}
                else if (content[i] == 'S'){output.push_back('M');}
                else if (content[i] == 't'){output.push_back('e');}
                else if (content[i] == 'T'){output.push_back('E');}
                else if (content[i] == 'u'){output.push_back('y');}
                else if (content[i] == 'U'){output.push_back('Y');}
                else if (content[i] == 'v'){output.push_back('h');}
                else if (content[i] == 'V'){output.push_back('H');}
                else if (content[i] == 'w'){output.push_back('c');}
                else if (content[i] == 'W'){output.push_back('C');}
                else if (content[i] == 'x'){output.push_back('z');}
                else if (content[i] == 'X'){output.push_back('Z');}
                else if (content[i] == 'y'){output.push_back('u');}
                else if (content[i] == 'Y'){output.push_back('U');}
                else if (content[i] == 'z'){output.push_back('x');}
                else if (content[i] == 'Z'){output.push_back('X');}
                else (output.push_back(content[i]));
            }
        }
        File.close();
        ofstream FileToWrite("decrypted.txt");
        FileToWrite << output;
        FileToWrite.close();
    }
}