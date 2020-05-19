#include "string.h"

int main (void)
{
    string_t this;
    string_t assign;
    string_t begin;
    string_t end;
    string_init(&begin, "hello ");
    string_init(&end, "world !");
    char *str = strdup("hello !");
    string_init(&this, "bonjour !"); 
    string_init(&assign, "assign !");
    printf("this->str : %s\n", this.str);
    assign_s(&this, &assign);
    printf("assign_s : %s\n", this.str);
    assign_c(&this, "bonjour !");
    printf("assign_c : %s\n", this.str);
    append_s(&begin, &end);
    printf("append_s : %s\n", begin.str);
    append_c(&this, " append_c marche!");
    printf("assign_c : %s\n", this.str);
    printf("at : %c\n", at(&this, 8));
    printf("compare_s : %d\n", compare_s(&this, &this));
    printf("compare_c : %d\n", compare_c(&this, "truc bid"));
    printf("char copied : %d\n", (int) copy(&begin, str, 5, 6));
    printf("c_str : %s\n", c_str(&this));
    printf("is empty? : %d\n", empty(&this));
    printf("find_s pos : %d\n", find_s(&this, &begin, 3));
    printf("find_c pos : %d\n", find_c(&this, "bon", 2));
    // string_t s;
    // string_init (&s, "HEyt");
    // printf("%s\n", s.str);
    // string_destroy(&s);
    return (0);
}
//string_init assigns the value of s to the str member of the structure string_t.
