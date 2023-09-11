#include <iostream>
#include "lib/decorator.hpp"

int main(void) {
    auto text_block = new Link(new Text());
    text_block->render("netology.ru", "Hello world!");
    return EXIT_SUCCESS;
}