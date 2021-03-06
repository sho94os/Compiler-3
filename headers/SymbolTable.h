//
// Created by Ashiq-103 on 5/6/2019.
//

#include <string>
#include <iostream>
#include <list>
#include "ScopeTable.h"


class SymbolTable
{
private:
    ScopeTable *currentScope;

public:
    int size;
    int currentScopeId;
    int scopeCount;

    string INSTRUCTIONS[8] = {"I", "L", "D", "P", "S", "E", "A", "C"};

    SymbolTable(int size)
    {
        this->size = size;
        currentScopeId = 1;
        scopeCount = 1;
        currentScope = new ScopeTable(1, size);
    }

    // void setScopeCount(int val){
    //     this->scopeCount = val;
    // }

    int getScopeCount(){
       return this->scopeCount;
    }


    void enterScope()
    {
        auto *newCurrentScope = new ScopeTable(++scopeCount, size);
        newCurrentScope->setParentScope(currentScope);
        currentScope = newCurrentScope;
        currentScopeId = newCurrentScope->id;
        Util::printMessage("Enter Scope", "Entering New Scope : ID " + to_string(currentScopeId));

    }

    void exitScope()
    {
        // if (currentScopeId == 0)
        // {
        //     Util::printMessage("ExitScope", "Exiting Global Scope/Terminating Program...\n");
        //     exit(EXIT_SUCCESS);
        // }
        ScopeTable *prev = currentScope;

        currentScope = currentScope->getParentScope();
        //currentScopeId = currentScope->id;Commenting This is essential
        prev->setParentScope(nullptr);
        Util::printMessage("Exiting Scope", to_string(currentScopeId + 1));
        //cout<<"Exiting Scope:"+to_string(prev->id)<<endl;
        delete prev;
    }

    bool insert(const SymbolInfo & si)
    {
        bool retVal = currentScope->insert(si.getName(),si.getType(),si.getDeclarationType());
        // if (retVal)
        //    printCurrentScopeTable();

        return retVal;
    }

    bool deleteSymbol(const string &symbol_name)
    {
        return currentScope->deleteSymbol(symbol_name);
    }

    SymbolInfo *lookUp(const string &symbol_name)
    {
        ScopeTable *iterator = currentScope;
        SymbolInfo *result;
        while (iterator != nullptr)
        {
            result = iterator->lookUp(symbol_name);
            iterator = iterator->getParentScope();
            if (result != nullptr)
                return result;
        }
        return nullptr;
    }

    int findValidIdName(const string &symbol_name)
    {
        ScopeTable *iterator = currentScope;
        SymbolInfo *result;
        while (iterator != nullptr)
        {
            result = iterator->lookUp(symbol_name);
            if (result != nullptr)
                return iterator->id;
            iterator = iterator->getParentScope();

        }
        return -1;
    }

    SymbolInfo *lookUpLocal(const string &symbol_name)
    {
        if (currentScope != nullptr)
            return currentScope->lookUp(symbol_name);

        return nullptr;
    }

    void printCurrentScopeTable()
    {
        currentScope->print();
    }

    void printAllScopeTables()
    {
        ScopeTable *iterator = currentScope;
        while (iterator != nullptr)
        {
            iterator->print();
            iterator = iterator->getParentScope();
        }
    }

    bool isValidInput(const string &i)
    {
        for (int j = 0; j < sizeof(INSTRUCTIONS) / sizeof(INSTRUCTIONS[0]); ++j)
        {
            if (i == INSTRUCTIONS[j] && (i != INSTRUCTIONS[6] || i != INSTRUCTIONS[7]))
                return true;
        }
        return false;
    }

    void processInput(const string &instruction)
    {
        Util::printMessage("ProcessInput", instruction + "\n");

        list<string> c;
        Util::split(instruction, c);

        const string op = c.front();
        c.pop_front();

        if (!isValidInput(op))
        {
            Util::printMessage("ERROR", "INVALID INSTRUCTION");
            return;
        }
        if (op == INSTRUCTIONS[0])
        { //Insert
            if (c.size() != 2)
            {
                Util::printMessage("ERROR", "INVALID INSTRUCTION");
                return;
            }
            const string name = c.front();
            c.pop_front();
            const string type = c.front();
            c.pop_front();
            const SymbolInfo symbol(name, type);
            insert(SymbolInfo(symbol.getName(),symbol.getType(),symbol.getDeclarationType()));
        }
        else if (op == INSTRUCTIONS[1])
        { // LookUp
            if (c.size() != 1)
            {
                Util::printMessage("ERROR", "INVALID INSTRUCTION");
                return;
            }
            const string name = c.front();
            c.pop_front();

            lookUp(name);
        }
        else if (op == INSTRUCTIONS[2])
        { // Delete
            if (c.size() != 1)
            {
                Util::printMessage("ERROR", "INVALID INSTRUCTION");
                return;
            }
            const string name = c.front();
            c.pop_front();

            deleteSymbol(name);
        }
        else if (op == INSTRUCTIONS[3])
        { // Print
            if (c.front() == INSTRUCTIONS[6])
                printAllScopeTables();
            else if (c.front() == INSTRUCTIONS[7])
                printCurrentScopeTable();
            else
                Util::printMessage("Print", "ERROR : INVALID INSTRUCTION AFTER P\n");
        }
        else if (op == INSTRUCTIONS[4])
        { // Entering new Scope
            enterScope();
        }
        else if (op == INSTRUCTIONS[5])
        { // Exiting Current Scope
            exitScope();
        }
    }
};
