/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2019 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <openssl/err.h>
#include "internal/propertyerr.h"

#ifndef OPENSSL_NO_ERR

static const ERR_STRING_DATA PROP_str_reasons[] = {
    {ERR_PACK(ERR_LIB_PROP, 0, PROP_R_NAME_TOO_LONG), "name too long"},
    {ERR_PACK(ERR_LIB_PROP, 0, PROP_R_NOT_AN_ASCII_CHARACTER),
    "not an ascii character"},
    {ERR_PACK(ERR_LIB_PROP, 0, PROP_R_NOT_AN_HEXADECIMAL_DIGIT),
    "not an hexadecimal digit"},
    {ERR_PACK(ERR_LIB_PROP, 0, PROP_R_NOT_AN_IDENTIFIER), "not an identifier"},
    {ERR_PACK(ERR_LIB_PROP, 0, PROP_R_NOT_AN_OCTAL_DIGIT),
    "not an octal digit"},
    {ERR_PACK(ERR_LIB_PROP, 0, PROP_R_NOT_A_DECIMAL_DIGIT),
    "not a decimal digit"},
    {ERR_PACK(ERR_LIB_PROP, 0, PROP_R_NO_MATCHING_STRING_DELIMETER),
    "no matching string delimeter"},
    {ERR_PACK(ERR_LIB_PROP, 0, PROP_R_NO_VALUE), "no value"},
    {ERR_PACK(ERR_LIB_PROP, 0, PROP_R_PARSE_FAILED), "parse failed"},
    {ERR_PACK(ERR_LIB_PROP, 0, PROP_R_STRING_TOO_LONG), "string too long"},
    {ERR_PACK(ERR_LIB_PROP, 0, PROP_R_TRAILING_CHARACTERS),
    "trailing characters"},
    {0, NULL}
};

#endif

int ERR_load_PROP_strings(void)
{
#ifndef OPENSSL_NO_ERR
    if (ERR_reason_error_string(PROP_str_reasons[0].error) == NULL)
        ERR_load_strings_const(PROP_str_reasons);
#endif
    return 1;
}
