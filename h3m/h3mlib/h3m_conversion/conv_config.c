#include "conv_config.h"

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
 
struct H3M_MONSTER_CONVERSION_CONFIG* read_monster_conversion_config(char* filePath)
{
    char row[CONV_TABLE_MAX_LENGTH] = { 0 };
    int rowsCount = 0;
    FILE* conversionConfigFile;

    conversionConfigFile = fopen(filePath, "r");
    if (!conversionConfigFile)
    {
        return -1;
    }
    if (!feof(conversionConfigFile))
    {
        rowsCount++;
        while (!feof(conversionConfigFile))
        {
            char ch = fgetc(conversionConfigFile);
            if (ch == '\n')
            {
                rowsCount++;
            }
        }
    }
    rewind(conversionConfigFile);

    int records_size = sizeof(struct H3M_MONSTER_CONVERSION_RECORD) * rowsCount;
    int config_size = records_size + sizeof(int);
    struct H3M_MONSTER_CONVERSION_CONFIG* config = malloc(config_size);
    config->records = malloc(records_size);;
    config->size = rowsCount;

    for (int i = 0; i < rowsCount; i++)
    {
        fgets(row, CONV_TABLE_MAX_LENGTH, conversionConfigFile);
        config->records[i] = parse_monster_conversion_config(row);
    }
    fclose(conversionConfigFile);
    return config;
}

struct H3M_MONSTER_CONVERSION_RECORD parse_monster_conversion_config(char* row)
{
    char buffer[CONV_TABLE_MAX_LENGTH] = { 0 };
    struct H3M_MONSTER_CONVERSION_RECORD record;
    for (int i = 0, j = 0, segment = 0; i < CONV_TABLE_MAX_LENGTH; i++)
    {
        if (row[i] == ',')
        {
            if(segment == 0) record.monsterId_in = atoi(buffer);
            else if(segment == 1) record.monsterId_out = atoi(buffer);
            j = 0;
            memset(buffer, 0, CONV_TABLE_MAX_LENGTH * sizeof(char));
            segment++;
        }
        else if (segment > 1 && (row[i] < 0x30 || row[i] > 0x39))
        {
            record.multiply = atoi(buffer);
            break;
        }
        else if ((row[i] < 0x30 && row[i] != 0x00 && row[i] != ',' && row[i] != '/') || (row[i] > 0x39))
        {
            record.monsterId_in = -1;
            return record;
        }
        else
        {
            buffer[j] = row[i];
            j++;
        }
    }
    return record;
}

int is_monster_conversion_config_exist(char* path)
{
    FILE* file;
    file = fopen(path, "r");
    if (!file)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}