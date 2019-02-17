#pragma once

//////////////////////////////////////////////////////////////////////////
int main(int argc, const char** argv);

//////////////////////////////////////////////////////////////////////////
class OperatorGraphAnalyzerApp
{
public:
    int run(int argc, const char **argv);

    friend int main(int argc, const char** argv);
    
private:
    OperatorGraphAnalyzerApp() = default;
    ~OperatorGraphAnalyzerApp() = default;
    
};
