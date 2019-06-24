#ifndef STRINGTOKENIZER_H
#define STRINGTOKENIZER_H

#include <string>
#include <vector>

// default delimiter string (space, tab, newline, carriage return, form feed)
const std::string DEFAULT_DELIMITER = " \t\v\n\r\f";

class StringTokenizer
{
public:
    StringTokenizer();
    StringTokenizer(const std::string& str, const std::string& delimiter=DEFAULT_DELIMITER);

    // set string and delimiter
    void set(const std::string& str, const std::string& delimiter=DEFAULT_DELIMITER);
    void setString(const std::string& str);             // set source string only
    void setDelimiter(const std::string& delimiter);    // set delimiter string only
    void addDelimiter(const std::string& add);          // add delimiter string only

    std::string nextToken();                            // return the next token, return "" if it ends
    bool hasMoreTokens();                               // true if has one more token else false

    std::vector<std::string> split();                   // return array of tokens from current cursor

private:
    void skipDelimiter();                               // ignore leading delimiters
    bool isDelimiter(char c);                           // check if the current char is delimiter

    std::string buffer;                                 // input string
    std::string token;                                  // output string
    std::string delimiter;                              // delimiter string
    std::string::const_iterator currPos;                // string iterator pointing the current position

};

#endif // STRINGTOKENIZER_H
