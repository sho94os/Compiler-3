//
// Created by Ashiq-103 on 5/6/2019.
//

#include <string>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <sstream>
#include <fstream>
#include <sys/stat.h>
#include <unistd.h>

using namespace std;
#define LEXER 0
#define PARSER 1
#define OUTPUT_FILE "logs/output_symbolTable.txt"
#define TOKEN_FILE "logs/1605103_token.txt"
#define INPUT_FILE "logs/input_symbolTable.txt"
#define LEXER_LOG "logs/1605103_lexer_log.txt"
#define PARSER_LOG "logs/1605103_log.txt"
#define LEXER_ERROR_FILE "logs/1605103_error.txt"
#define PARSER_ERROR_FILE "logs/1605103_error.txt"

class Util{
public:
    static inline bool isFileExists (const string& name) {
        struct stat buffer;
        return (stat (name.c_str(), &buffer) == 0);
    }

    static void appendLogError(int line_no,const string & error_msg,int type){
        ofstream outfile;
        if(type == LEXER){
            outfile.open(LEXER_ERROR_FILE, std::ios_base::app);
            outfile <<"Line:"<<line_no<<" Error"<<": "<<error_msg<<endl;
        }
        else if(type == PARSER){
            outfile.open(PARSER_ERROR_FILE, std::ios_base::app);
            outfile <<"Line:"<<line_no<<" Error"<<": "<<error_msg<<endl;
        }
    }
    static void lexerLog(const string & data){
        ofstream outfile;

        outfile.open(LEXER_LOG, std::ios_base::app);
        outfile << data<<endl;
    }
    static void lexerLog(int line_no,const string & token,const string & lexeme){
        ofstream outfile;

        outfile.open(LEXER_LOG, std::ios_base::app);
        outfile << "Line:"<<line_no<<" Token: "<<token<<" Lexeme: "<<lexeme<<endl;;
    }
    static void parserLog(const string & data){
        ofstream outfile;

        outfile.open(PARSER_LOG, std::ios_base::app);
        outfile << data<<endl;
    }
    static void parserLog(int line_no,const string & rule){
        ofstream outfile;

        outfile.open(PARSER_LOG, std::ios_base::app);
        outfile << "Line:"<<line_no<<"  "<<rule<<endl;;
    }
    static void appendToken(const string & symbol){
        ofstream outfile;

        outfile.open(TOKEN_FILE, std::ios_base::app);
        outfile <<"<"<<symbol<<"> ";
    }
    static void appendToken(const string & type,const string & symbol){
        ofstream outfile;

        outfile.open(TOKEN_FILE, std::ios_base::app);
        outfile <<"<"<<type<<", "<<symbol<<"> ";
    }
    static void appendToken(const string & type,char symbol){
        ofstream outfile;

        outfile.open(TOKEN_FILE, std::ios_base::app);
        outfile <<"<"<<type<<", "<<symbol<<"> ";
    }
    static void clearFiles(){
        if(isFileExists(OUTPUT_FILE))remove(OUTPUT_FILE);
        if(isFileExists(TOKEN_FILE))remove(TOKEN_FILE); 
        if(isFileExists(LEXER_LOG))remove(LEXER_LOG);
        if(isFileExists(PARSER_LOG))remove(PARSER_LOG);
        if(isFileExists(LEXER_ERROR_FILE))remove(LEXER_ERROR_FILE);
        if(isFileExists(PARSER_ERROR_FILE))remove(PARSER_ERROR_FILE);
    }

    template <class Container> static void readAllFromFile(Container& container){
        ifstream inFile(INPUT_FILE);
        string line;
        while (std::getline(inFile, line))
        {
            container.push_back(line);
        }
    }

    template <class Container> static void split(const std::string& str, Container& cont,
                                          char delim = ' ')
    {
        std::size_t current, previous = 0;
        current = str.find(delim);
        while (current != std::string::npos) {
            cont.push_back(str.substr(previous, current - previous));
            previous = current + 1;
            current = str.find(delim, previous);
        }
        cont.push_back(str.substr(previous, current - previous));
    }

    static void appendToFile(const string & data){
        ofstream outfile;

        outfile.open(OUTPUT_FILE, std::ios_base::app);
        outfile << data;
    }
    static void printMessage(string tag,string msg){
        //cout<<tag<<" : "<<msg<<endl;
        appendToFile(tag + " : "+msg+"\n");
        fflush(stdout);
    }
};