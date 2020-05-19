/*
** EPITECH PROJECT, 2020
** c++pool
** File description:
** string.h
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct string_s
{
    char *str;
    void (*assign_s)(struct string_s *this, const struct string_s *str);
    void (*assign_c)(struct string_s *this, const char *s);
    void (*append_s)(struct string_s *this, const struct string_s *ap);
    void (*append_c)(struct string_s *this, const char *ap);
    void (*at)(const struct string_s *this, size_t pos);
    void (*size)(const struct string_s *this);
    void (*clear)(struct string_s *this);
    void (*compare_s)(const struct string_s *this, const struct string_s *str);
    void (*compare_c)(const struct string_s *this, const char *str);
    void (*copy)(const struct string_s *this, char *s, size_t n, size_t pos);
    void (*c_str)(const struct string_s *this);
    void (*empty)(const struct string_s *this);
    void (*find_s)(const struct string_s *this, const struct string_s *str,
    size_t pos);
    void (*find_c)(const struct string_s *this, const char *str, size_t pos);
};
typedef struct string_s string_t;

void string_init(string_t *this, const char *s);
void string_destroy(string_t *this);
void assign_s(string_t *this, const string_t *str);
void assign_c(string_t *this, const char *s);
void append_s(string_t *this, const string_t *ap);
void append_c(string_t *this, const char *ap);
char at(const string_t *this, size_t pos);
void clear(string_t *this);
int size(const string_t *this);
int compare_s(const string_t *this, const string_t *str);
int compare_c(const string_t *this, const char *str);
size_t copy(const string_t *this, char *s, size_t n, size_t pos);
const char *c_str(const string_t *this);
int empty(const string_t *this);
int find_s(const string_t *this, const string_t *str, size_t pos);
int find_c(const string_t *this, const char *str, size_t pos);
