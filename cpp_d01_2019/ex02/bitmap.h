/*
** EPITECH PROJECT, 2020
** C++pool D1
** File description:
** bitmap.h
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

struct bmp_header_s
{
    uint16_t magic;
    uint32_t size;
    uint16_t _app1;
    uint16_t _app2;
    uint32_t offset;
};
typedef struct bmp_header_s bmp_header_t;

struct bmp_info_header_s
{
    uint32_t size;
    int32_t	width;
    int32_t	height;
    uint16_t planes;
    uint16_t bpp;
    uint32_t compression;
    uint32_t raw_data_size;
    int32_t h_resolution;
    int32_t v_resolution;
    uint32_t palette_size;
    uint32_t important_colors;
};
typedef struct bmp_info_header_s bmp_info_header_t;

void make_bmp_header(bmp_header_t* header, size_t size);
void make_bmp_info_header(bmp_info_header_t* header, size_t size);
