// CSC 134
// M3HW2 question 2
// Feb 10, 2019
// Khristopher Lane

#include <iostream>
#include <cstdlib>

using namespace std;

    // This is a Fantasy universe within the world of Goldmare
    // Player is a person who has just escaped prison and have to find a way to escape
    // Each room will have the tools that may or may not help them escape
    // if player is caught, they are either dead or captured, game is over
    // There are going to be at least five rooms with two choices after the player leaves the cell
    // Each room has its own function
    // winning condition is escaping the prison
    // losing condition is being caught or die
void cell();
void armory();
void guardsPost();
void barracks();
void courtYard();
void mainGate();
void lose();
void credits();

// Global variables
// bool hasLONGSWORD = false; // did they take the LONGSWORD?
// bool hasLONGBOW = false; // did they take the LONGBOW?
// bool hasSTRENGTH = false; // did they take the STRENGTH potion?
// bool hasDEXTERITY = false; // did they take the DEXTERITY potion?
// bool hasSTEEL = false; // did they take the STEEL armor?
// bool hasLEATHER = false; // did they take the LEATHER armor?

void cell()
{
    cout << "It is late at night within your cell. There is sounds of shouting heard throughout the prison." << endl;
    cout << "You woke up and found out your cell is wide open and there is a dead guard in front of your cell." << endl;
    cout << "What do you do now? Head LEFT or RIGHT: ";
    string command;
    cin >> command;
    if (command == "LEFT" || command == "left")
    {
        guardsPost();
    }
    else if (command == "RIGHT" || command == "right")
    {
        armory();
    }
}

void guardsPost()
{
cout << "You walk into what looks like the guards post and seems like there is no one here." << endl;
cout << "You notice there are two potions siting on a table next to the guard's station on your right." << endl;
cout << "From your knowledge one is for STRENGTH and the other is for DEXTERITY." << endl;
cout << "Which one will you take, STRENGTH or DEXTERITY or NONE? ";
string command;
cin >> command;
    if (command == "STRENGTH" || command == "strength")
    {
        cout << "You picked up the STRENGTH potion and drank it whole." << endl;
        cout << "You felt your STRENGTH double within seconds and you feel like a giant!" << endl;
    }
    else if (command == "DEXTERITY" || command == "dexterity")
    {
        cout << "You picked up the DEXTERITY potion and drank it whole." << endl;
        cout << "You felt your reflexes increase and your senses enhanced!" << endl;
    }
    else
    {
        cout << "you decided that you do not need neither of the potions because the fear of becoming ill." << endl;
    }
cout << "You noticed there are two more doors. One to the NORTH and one to your EAST." << endl;
cout << "Which door will you pick? ";
string commandTwo;
cin >> commandTwo;
    if (commandTwo == "NORTH" || commandTwo == "north")
    {
        cout << "You choose to head to the North door." << endl;
        courtYard();
    }
    else if (commandTwo == "EAST" || commandTwo == "east")
    {
        cout << "You choose to head to the East door." << endl;
        barracks();
    }
}
void armory()
{
cout << "You entered the armory and noticed it was unlocked. There are weapons stashed all around you." << endl;
cout << "You only have time to get one thing, and notice a LONGSWORD and a LONGBOW." << endl;
cout << "Which one will you take, the LONGSWORD or the LONGBOW or NONE? ";
string weapon;
cin >> weapon;
    if(weapon == "LONGSWORD" || weapon == "longsword")
    {
        cout << "You chosen the LONGSWORD, the hilt felt solid within your grasp." << endl;
        cout << "The blade's edge looks slightly dull, but still enough to cut." << endl;
        cout << "After you got what you wanted, you head back to the cell area." << endl;
        cell();
    }
    else if (weapon == "LONGBOW" || weapon == "longbow")
    {
        cout << "You chosen the LONGBOW, the string looks worn out and the arrow tips is dull." << endl;
        cout << "The LONGBOW itself is made of strong elf wood, which handle stress from your hands." << endl;
        cout << "After you got what you wanted, you head back to the cell area." << endl;
        cell();
    }
    else
    {
        cout << "You decided that you did not need a weapon and want to go bare fists!" << endl;
        cout << "You decided to head right back to the cell area." << endl;
        cell();
    }
}
void barracks()
{
cout << "You found out that the EAST door took you to what looks like a barracks for the guards." << endl;
cout << "Good thing there is no guards here, but you noticed two lockers are open." << endl;
cout << "You can take one of them to remove the old rags you have." << endl;
cout << "One held LEATHER armor and the other held STEEL armor, which one will you take or NONE at all? ";
string armor;
cin >> armor;
    if (armor == "LEATHER" || armor == "leather")
    {
        cout << "You decided to take the LEATHER armor, and it felt comfortable against your body." << endl;
        cout << "You noticed you have kept some of your mobility." << endl;
        cout << "After you were done, you head back to the guard's post." << endl;
        guardsPost();
    }
    else if (armor == "STEEL" || armor == "steel")
    {
        cout << "You decided to take the STEEL armor, and it felt heavy against your body." << endl;
        cout << "You noticed you have limited mobility within the armor." << endl;
        cout << "After you were done, you head back to the guard's post." << endl;
        guardsPost();
    }
    else
    {
        cout << "You decided that you do not want to risk the armor and kept your cloth prison rags." << endl;
        cout << "After you were done, you head back to the guard's post." << endl;
        guardsPost();
    }
}
void courtYard()
{
cout << "You entered a large courtyard where the guards practice heir skills." << endl;
cout << "At the center of the courtyard would be four guards conducting training exercises." << endl;
cout << "Once the doors closed behind you, the guards would glance at your direction and shouts at you." << endl;
cout << "You are trapped, you can either FIGHT or SURRENDER, what would you do? ";
string action;
cin >> action;
    if (action == "SURRENDER" || action == "surrender")
    {
        cout << "you chose to SURRENDER because of fear began to overwhelm you." << endl;
        cout << "The guards would come over to you, tie you up and take you back to your cell." << endl;
        cout << "GAME OVER!" << endl;
        lose();
    }
    else if (action == "FIGHT" || action == "fight")
    {
        cout << "You have developed a sense of courage, taking what you have on person and rushed at the guards." << endl;
        cout << "You fought the guards and luckily they were just trainees, making it easy to overwhelm them." << endl;
        cout << "You defeated the four guards, but need to hurry before more guards arrive. There is only one corridor you can run to." << endl;
        cout << "You rushed to your only option of escape, leaving the battle scene behind you." << endl;
        mainGate();
    }
}
void mainGate()
{
cout << "You have escaped from the courtyard successfully, but eventually you will find yourself at a steel wooden gate." << endl;
cout << "In front of the gate you would see two armed guards and a fully plated man." << endl;
cout << "From what you can recall, that fully plated man is the WARDEN of the prison." << endl;
cout << "He shouted a strong command towards you about surrendering or you will die by his hands." << endl;
cout << "You had realized that you have been through too much to just give up now! So you only have one option, to fight for your freedom!" << endl;
cout << "You only have one shot, what will you do: fight the WARDEN or fight the GUARDS? ";
string final;
cin >> final;
    if (final == "WARDEN" || final == "warden")
    {
        cout << "You believe the best choice is to take out the WARDEN than the GUARDS!" << endl;
        cout << "You rushed at him with all your might, fighting the WARDEN directly. Your will to live is quite high!" << endl;
        cout << "You used your weapon of choice to strike direct impacts against the WARDEN's exposed armor to cause heavy damage." << endl;
        cout << "The WARDEN went down without an effort to strike back and fell down dead." << endl;
        cout << "The two bodyguards were in awe of what occurred and the look in your eyes pushed them over the edge to escape." << endl;
        cout << "You gazed at the large door, sigh of relief washed over your body. Once you opened the door, you became free." << endl;
        credits();
    }
    else if (final == "GUARDS" || final == "guards")
    {
        cout << "you decided it was easier to take out the two bodyguards first before you face the boss." << endl;
        cout << "You charged at them to fight head on, using your weapon of choice to damage them." << endl;
        cout << "You fought them one at a time, but you were already too fatigued to face the WARDEN." << endl;
        cout << "When You turned to face the WARDEN, you noticed that the WARDEN had already summoned more guards to his aid." << endl;
        cout << "He was too much of a coward to face you directly and ordered his men on you." << endl;
        cout << "You slowly fend them off one by one, but there was too many and soon was overwhelmed." << endl;
        cout << "GAME OVER!" << endl;
        lose();
    }
}
void credits()
{
    cout << "Once you had walked outside, you would see the reason why you had found your cell wide open." << endl;
    cout << "There is be a robed figure standing in front of you, beckoning you to walk forward." << endl;
    cout << "The stranger told you that they were waiting for you, proving yourself for what is to come." << endl;
    cout << "You were perplexed, but you find their words truthful for you wanted to live than rot in a cell." << endl;
    cout << "The stranger would open up a portal, lowering their hood to reveal them to be a female elf." << endl;
    cout << "She waved at you to follow her into the portal, and once you do the portal closes behind you." << endl;
    cout << "You have WON! you escaped the prison and your future is now on you!" << endl;
    exit(0);
}
void lose()
{
    cout << "You had gotten yourself captured or you had been killed. Good BYE!" << endl;
    exit(0);
}
int main()
{
    cout << "Hello New player, are you ready to start your quest? y/n ";
    string answer;
    cin >> answer;
        if(answer == "y" || answer == "Y")
        {
    // Start in cell
    cell();
    //Room 1: get a potion
    guardsPost();
    // Room 2: get a weapon
    armory();
    // Room 3: get armor
    barracks ();
    // Room 4: fight or surrender
    courtYard();
    // Room 5: fight warden or guards
    mainGate();
     // Lost game
    lose();
        }
        else
        {
            cout << "Too bad. Maybe Next time. Have a good day!" << endl;
        }
    // Credits of winning the game
    credits();
    return 0;
}
