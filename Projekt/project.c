#include <stdio.h>
#include <string.h>

//prog1.h helyettesítő készülék:
typedef char * string;

// bele writingol a kapott kimenetbe függvény lánc:
void py_source(FILE *f) {

    fprintf(f, "print(\"Hello World\")\n");
    fprintf(f, "###############\n");
    fprintf(f, "def main():\n");
    fprintf(f, "    print(\"Py3\")\n");

}

void c_source(FILE *f) {

    fprintf(f, "#include <stdio.h>\n");
    fprintf(f, "int main()\n");
    fprintf(f, "{\n");
    fprintf(f, "    printf(\"Hello World!\\n\");\n");
    fprintf(f, "    return 0;\n");
    fprintf(f, "}\n");

}

void bash_source(FILE *f) {

    fprintf(f, "#!/bin/bash\n");
    fprintf(f, "echo Hello World\n");

}

void java_source(FILE *f) {

    fprintf(f, "public class HelloWorld {\n");
    fprintf(f, "    public static void main(String[] args) {\n");
    fprintf(f, "        System.out.println(\"Hello World\");\n");
    fprintf(f, "    }\n");
    fprintf(f, "}\n");

}

int main(int argc, string argv[]) {

    //help és alap program:
    
    if (argc < 2 || strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0) {

        printf("Available Options\n");
        puts("");
        printf("-h  --help    -show this help\n");
        printf("-v            -version info\n");
        printf("--stdout      -\n");
        puts("");

        printf("Available Templates:\n");
        puts("");
        printf("*c      -C source code [main.c]\n");
        printf("*java   -Java source code [Main.java]\n");
        printf("*py     -Python source code [main.py]\n");
        printf("*sh     -Bash source code [main.sh]\n");
        return 0;
    }

    //verzió lekérése:
    if (strcmp(argv[1], "-v") == 0) {
        printf("alap v0.2.0\n");
        return 0;
    }

    string language = argv[1];
    FILE *kimenet = NULL;
    int is_stdout = (argc > 2 && strcmp(argv[2], "--stdout") == 0);
    char *filename = NULL;

    // ez az a rész amit külön librarybe kéne rakni de lusta vagyok teccik e tudni?
    //különböző nyelvek alap progi lekreálása:
    
    if (strcmp(language, "py") == 0){

        filename = "main.py";

    }else if (strcmp(language, "c") == 0){

        filename = "main.c";

    }else if (strcmp(language, "java") == 0){

        filename = "Main.java";
    
    }else if (strcmp(language, "sh") == 0){

        filename = "main.sh";

    }else {

        printf("Ismeretlen nyelv: %s\n", language);
        return 1;
    }

    
    if (is_stdout) {

        kimenet = stdout;

    } else {
        
        FILE *check = fopen(filename, "r");
        if (check) {

            printf("Hiba: A(z) '%s' már létezik!\n", filename);
            fclose(check);

            return 1;
        }

        kimenet = fopen(filename, "w");

        if (!kimenet) {

            printf("Hiba a fájl létrehozásakor!\n");

            return 1;
        }
    }

    
    //különböző nyelvek --stdout progi kiírása:
    if (strcmp(language, "py") == 0){

        py_source(kimenet);

    }else if (strcmp(language, "c") == 0){

        c_source(kimenet);

    }else if (strcmp(language, "java") == 0){

        java_source(kimenet);

    }else if (strcmp(language, "sh") == 0){

        bash_source(kimenet);

    }
    
    if (!is_stdout) {

        fclose(kimenet);
        printf("'%s' file was created\n", filename);

    }

    return 0;
}