#include <iostream>
#include <fstream>

int main(int ac, char *av[])
{
    std::string filename;
    std::string newFilename;
    std::string string1;
    std::string string2;
    std::string toReplace;
    char c;

    if (ac != 4)
    {
        std::cerr << "usage: ./main filename word-to-repace replace-by" << std::endl;
        return (1);
    }
    try
    {
        filename.append(av[1]);
        string1.append(av[2]);
        string2.append(av[3]);

        newFilename = "new-" + filename;
        std::ifstream inputFileStream(filename);
        std::ofstream outputFileStream(newFilename);

        if (!inputFileStream.good() || !outputFileStream.good())
        {
            std::cerr << "Error with files" << std::endl;
            return 1;
        }

        while (!inputFileStream.eof())
        {
            c = inputFileStream.get();
            if (inputFileStream.eof())
                break;

            toReplace += c;
            if (inputFileStream.eof())
                break;
            if (string1.rfind(toReplace, 0) != 0)
            {
                outputFileStream << toReplace;
                toReplace.clear();
            }
            else if (string1 == toReplace)
            {
                outputFileStream << string2;
                toReplace.clear();
            }
        }
        if (toReplace.length() > 0)
            outputFileStream << toReplace;
        inputFileStream.close();
        outputFileStream.close();
    }
    catch (...)
    {
        std::cerr << "something went wrong" << std::endl;
    }

    return (0);
}
