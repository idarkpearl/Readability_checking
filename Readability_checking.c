#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAX_TEXT_LENGTH 1000
char text[MAX_TEXT_LENGTH];
int count_letters(char *sentence);
int count_words(char *sentence);
int count_sentences(char *sentence);
int main(){
    printf("text: ");
    fgets(text, sizeof(text), stdin);  
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);
    float L = (float) letters / words * 100;
    float S = (float) sentences / words * 100;
    float index = 0.0588 * L - 0.296 * S - 15.8;
    int grade = round(index);
    if (grade > 16) 
        {
             printf("Grade 16+\n");
        } 
        else if (grade < 1) 
        {
             printf("Before Grade 1\n");
        } 
    else 
        {
             printf("Grade %d\n", grade);
        }

    return 0;
    
    }
int count_letters(char *sentence)
    {
        int letters = 0;
    while (*sentence) {
        if ((*sentence >= 'a' && *sentence <= 'z') || (*sentence >= 'A' && *sentence <= 'Z')) {
            letters++;
        }
        sentence++;
    }
    return letters;
        
        
    }
int count_words(char *sentence)

    {
        int space = 0;
        int length = strlen(sentence);
        for(int i=0;i<length;i++)
            {
             if(*sentence == ' ')
                {
                    space++;
                }    

             sentence++;
            }
        int words = space + 1;
        return words ;
     }
int count_sentences(char *sentence)
{
    int sentences = 0;
    while (*sentence) {
        if (*sentence == '.' || *sentence == '!' || *sentence == '?') {
            sentences++;
        }
        sentence++;
    }
    return sentences;
}
