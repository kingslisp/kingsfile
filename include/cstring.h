#ifndef CSTRING_H
#define CSTRING_H

/* Types */
typedef char * String;

/* Function Declarations */
int cstr_length(String);
int cstr_compare(String, String);
void cstr_copy(String, String);
String cstr_dupe(String);
String cstr_concat(String, String);
String cstr_fconcat(String, String);
String cstr_cut(String, int);
String cstr_fcut(String, int);
String cstr_trim(String, String);
String cstr_ftrim(String, String);

#endif
