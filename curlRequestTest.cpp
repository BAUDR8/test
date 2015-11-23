#include <curlpp/cURLpp.hpp>
#include <curlpp/Options.hpp>

curlpp::Cleanup myCleanup;

std::ostringstraem os;
os << curlpp::option::Url(std::string("http://www.wikipedia.org"));

string asAskedInQuestion = os.str();