
#include "conv_config.h"

#include <stdio.h>
#include <stdint.h>
 
#define CONV_TABLE_MAX_RECORDS 256

const char* conversion_table_config_fileName = "";


void read_conversion_table_config(char* filePath)
{
    FILE* conversionConfigFile;
    conversionConfigFile = fopen(filePath, "r");
    if (!conversionConfigFile)
    {
        return 1;
    }
    char *row;
    //char *configRows[CONV_TABLE_MAX_RECORDS];
    while (fgets(row, CONV_TABLE_MAX_RECORDS, conversionConfigFile))
    {
        parse_conversion_table_row(row);
    }
}

void parse_conversion_table_row(char* row)
{

}

void pek()
{
    read_conversion_table_config(conversion_table_config_fileName);
}