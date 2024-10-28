// src/main.cpp
#include <httplib/httplib.h>

int main() {
    httplib::Server svr;
    int port = 8080;

    svr.Get("/", [](const httplib::Request&, httplib::Response& res) {
        res.set_content("Hello, World!", "text/plain");
    });

    std::cout << "Server is running on http://localhost:" << port << std::endl;
    // Start the server on port 8080
    svr.listen("0.0.0.0", port);

    return 0;
}
