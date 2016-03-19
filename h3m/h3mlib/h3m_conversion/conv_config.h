#ifndef __CONV_CONFIG_H_DEF__
#define __CONV_CONFIG_H_DEF__

#include <stdint.h>

#define CONV_TABLE_MAX_RECORDS 256
#define CONV_TABLE_MAX_LENGTH 10

static const char* monster_conversion_config_pat2h = "C:\\monsters_conversion_table.conf";

struct H3M_MONSTER_CONVERSION_RECORD
{
    unsigned int monsterId_in;
    unsigned int monsterId_out;
    unsigned int multiply;
};

struct H3M_MONSTER_CONVERSION_CONFIG
{
    struct H3M_MONSTER_CONVERSION_RECORD* records;
    int size;
};

struct H3M_MONSTER_CONVERSION_CONFIG* read_monster_conversion_config(char* filePath);
struct H3M_MONSTER_CONVERSION_RECORD parse_monster_conversion_config(char* row);
int is_monster_conversion_config_exist(char* path);

#endif