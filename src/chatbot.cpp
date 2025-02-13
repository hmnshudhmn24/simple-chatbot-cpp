#include "chatbot.h"
#include <iostream>
#include <algorithm>

using namespace std;

Chatbot::Chatbot() {
    responses["hello"] = "Hello! How can I help you today?";
    responses["how are you"] = "I'm just a bot, but I'm doing great!";
    responses["what is your name"] = "I'm a simple C++ chatbot!";
    responses["bye"] = "Goodbye! Have a great day!";
}

void Chatbot::chat() {
    string input;
    cout << "Chatbot: Hello! Type 'bye' to exit.\n";

    while (true) {
        cout << "You: ";
        getline(cin, input);

        transform(input.begin(), input.end(), input.begin(), ::tolower);

        if (input == "bye") {
            cout << "Chatbot: " << responses["bye"] << "\n";
            break;
        } else if (responses.find(input) != responses.end()) {
            cout << "Chatbot: " << responses[input] << "\n";
        } else {
            cout << "Chatbot: Sorry, I don't understand. Can you rephrase?\n";
        }
    }
}
