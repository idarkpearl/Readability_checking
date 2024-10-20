# Readability_checking
This code provides a simple tool to analyze the readability of a given text input. It calculates the number of letters, words, and sentences in the input, and then determines a readability grade based on the Coleman-Liau index.
Input: The program prompts the user to enter a block of text.

Counting Functions:

count_letters: Counts the total number of alphabetic characters.
count_words: Counts the total number of words by counting spaces.
count_sentences: Counts the number of sentences based on punctuation marks (., !, ?).
Readability Calculation: The program computes the readability index using the formula:

index = 0.0588 × 𝐿 − 0.296 × 𝑆 − 15.8
where 
L is the average number of letters per 100 words, and 
S is the average number of sentences per 100 words.

Output: The program outputs the grade level of the text, indicating whether it's suitable for grade 1, 16+, or somewhere in between.
