/* (c) 2019, xcmats */
#include <stdio.h>
char *src[] = {
    "/* (c) 2019, xcmats */",
    "#include <stdio.h>",
    "char *src[] = {",
    "}, buf[100];",
    "char *esc (char *b, char *s) {",
    "    int i, j;",
    "    for (i = 0, j = 0; s[i] != 0; i++, j++) {",
    "        if (s[i] == '\\\\' || s[i] == '\\\"' || s[i] == '\%') b[j++] = '\\\\';",
    "        b[j] = s[i];",
    "    }",
    "    b[j] = 0;",
    "    return b;",
    "}",
    "int main () {",
    "    int i;",
    "    for (i = 0; i < 3; i++) puts(src[i]);",
    "    for (i = 0; i < 19; i++) printf(\"    \\\"\%s\\\",\\n\", esc(buf, src[i]));",
    "    printf(\"    \\\"\%s\\\"\\n\", esc(buf, src[19]));",
    "    for (i = 3; i < 20; i++) puts(src[i]);",
    "}"
}, buf[100];
char *esc (char *b, char *s) {
    int i, j;
    for (i = 0, j = 0; s[i] != 0; i++, j++) {
        if (s[i] == '\\' || s[i] == '\"' || s[i] == '%') b[j++] = '\\';
        b[j] = s[i];
    }
    b[j] = 0;
    return b;
}
int main () {
    int i;
    for (i = 0; i < 3; i++) puts(src[i]);
    for (i = 0; i < 19; i++) printf("    \"%s\",\n", esc(buf, src[i]));
    printf("    \"%s\"\n", esc(buf, src[19]));
    for (i = 3; i < 20; i++) puts(src[i]);
}
