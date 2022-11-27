#include "Helpers.h"

namespace Helpers
{

std::string RandomString(){
    const uint16_t max_len = 16;
    std::string valid_chars = "abcdefghijklmnopqrstuvwxyz0123456789";

    std::random_device rd;
    std::mt19937 g(rd());

    std::shuffle(valid_chars.begin(), valid_chars.end(), g);
    std::string rand_str(valid_chars.begin(), valid_chars.begin() + max_len);

    return rand_str;
}

} // namespace Helpers
