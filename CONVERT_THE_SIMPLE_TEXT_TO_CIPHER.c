    #include<stdio.h>
    #include<conio.h>
    #include<string.h>
    void main() {
            char plainText[100], cipherText[100], value;
            int i = 0, key;
            printf("Enter the plain text(all caps):");
            fgets(plainText, 100, stdin);
            printf("Enter the key to create cipher text(1 - 5):");
            scanf("%d", &key);
            plainText[strlen(plainText) - 1] = '\0';
            while (plainText[i] != '\0') {
                    if ((plainText[i] + key) > 'Z') {
                            value = (plainText[i] + key) - 'Z';
                            cipherText[i] = 'A' + value - 1;
                    } else {
                            cipherText[i] = plainText[i] + key;
                    }
                    i++;
            }
            cipherText[i] = '\0';
            printf("Resultant Cipher Text: %s\n", cipherText);
            i = 0;
            printf("Plain Text:");
            while (cipherText[i] != '\0') {
                    if ((cipherText[i] - key) < 'A') {
                            printf("%c", 'Z' + 1 - ('A' - (cipherText[i] - key)));
                    } else {
                            printf("%c", cipherText[i] - key);
                    }
                    i++;
            }
            printf("\n");
            getch();
      }