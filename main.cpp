#include <fmt/format.h>

int main(int argc, char** argv)
{
    printf("%s", fmt::format("Hello World: {}", 42).c_str());
    return 0;
}
