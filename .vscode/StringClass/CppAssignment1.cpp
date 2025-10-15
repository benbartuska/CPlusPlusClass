#include <iostream>

using namespace std;

class URL{
    string protocol;
    string resource;

    public:
        URL(string protocolIn, string resourceIn) {
            protocol = protocolIn;
            resource = resourceIn;
        }

        void displayUrl(){
            cout << protocol << "://" << resource << endl;
        }
};

int main(){
<<<<<<< HEAD
    URL test = URL("http", "www.example2.com/index/html");
=======
    URL test = URL("http", "www.example1.com/index/html");
>>>>>>> main
    test.displayUrl();
}