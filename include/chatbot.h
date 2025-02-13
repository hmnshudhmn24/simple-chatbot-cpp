#ifndef CHATBOT_H
#define CHATBOT_H

#include <string>
#include <unordered_map>

class Chatbot {
private:
    std::unordered_map<std::string, std::string> responses;

public:
    Chatbot();
    void chat();
};

#endif // CHATBOT_H
