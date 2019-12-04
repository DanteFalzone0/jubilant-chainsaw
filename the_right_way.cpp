/* The first time I tried to learn C++, I stayed away
   from dynamic memory management because I was afraid
   that I would fuck it up. Now, having learned how to
   confidently use malloc(), calloc(), free(), etc. in
   C, I feel no fear approaching C++'s new and delete
   operators.

   This is of course a contrived example but it's my
   first time writing constructors and destructors in
   C++.
*/

#include <iostream>

class KittyCat {
public:
    KittyCat(std::string nya) { /* constructor */
        nya_message = nya;
    }

    ~KittyCat(void) {} /* Destructor */

    void nya(void) {
        std::cout << nya_message << std::endl;
    }

private:
    std::string nya_message;
};

int main(void) {
    KittyCat *kitty_cat = new KittyCat("Nya~ <3");
    kitty_cat->nya();
    delete kitty_cat;
    return 0;
}
