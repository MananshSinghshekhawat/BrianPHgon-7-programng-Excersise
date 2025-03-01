 /*Mad libs are a simple game where you create a story template with blanks for words. You, or another player, then
construct a list of words and place them into the story, creating an often silly or funny story as a result.
Create a simple mad-lib program that prompts for a noun,
a verb, an adverb, and an adjective and injects those into a
story that you create.
Example Output
Enter a noun: dog
Enter a verb: walk
Enter an adjective: blue
Enter an adverb: quickly
Do you walk your blue dog quickly? That's hilarious! 
 */


 #include<iostream>
 using namespace std;

 int main()
 {
    string noun;
    std::cout<<"Enter a noun:";
    std::getline(cin, noun);

    string verb;
    std::cout<<"Enter a verb:";
    std::getline(cin,verb);

    string adjective;
    std::cout<<"Enter an adjective:";
    std::getline(cin, adjective);

    string adverb;
    std::cout<<"Enter a adverb:";
    std::getline(cin, adverb);

    string name;
    std::cout<<"Do you walk your blue dog quickly?";
    std::getline(cin,  name);

    return 0;


 }