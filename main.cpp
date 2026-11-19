#include <iostream>
#include <windows.h>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
 

int main()
{
    int choice;
    char error[256];
    int currentSong=0;
    srand(time(0));

    while(true)
    {
        system("cls");

        cout << "========================================\n";
        cout << "          << MY MUSIC PLAYER >>         \n";
        cout << "========================================\n";
        cout << "\n1. View Playlist";
        cout << "\n2. Play Song";
        cout << "\n3. Pause Song";
        cout << "\n4. Next Song";
        cout << "\n5. Previous Song";
        cout << "\n6. Shuffle ";
        cout << "\n7. Search Song";
        cout << "\n8. Exit";

        cout << "\n\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {

            case 1:
                cout << "\n\n==========<PLAYLISTS>==========\n";
                cout<<  "\n\n========ENGLISH SONGS =========\n";
                cout << "1. Tokyo Drift\n";
                cout << "2. Impostor Syndrome\n";
                cout << "3. 500 miles\n";
                cout << "4. Bye Bye Bye\n";
                cout << "5. Sunflower\n";
                cout << "\n\n=========HINDI SONGS===========\n";
                cout << "1. Udi Udi\n";
                cout << "2. Sapphire\n";
                cout << "3. Ilahi\n";
                cout << "4. PHIR SE\n";
                cout << "5. Raanjhan\n";
                cout << "\n\n==========OLD SONGS============\n";
                cout << "1. Falak Tak\n";
                cout << "2. Dil Yeh Kaha Hain Dil Se \n";
                cout << "3. Aaye Ho Meri Zindagi Mein\n";
                cout << "4. Papa Kehte Hein Bada Naam Karega \n";
                cout << "5. Jo Bhi Kasmein Khai Thi Humne \n";
                cout << "6. Main Yahaan Hoon";
                cout << "\n\n========TRENDING SONGS=========\n";
                cout << "1. KALYANI\n";
                cout << "2. Bairan\n";
                cout << "3. FOR A REASON\n";
                cout << "4. Sahiba Lyrics\n";
                cout << "5. Jaiye Sajana\n";
                 break;

            case 2:
            {
                int songChoice;

                cout << "\n\n========== SELECT SONG ==========\n";
                cout << "\n\n========ENGLISH SONGS =========\n";
                cout << "1. Tokyo Drift\n";
                cout << "2. Imposter Syndrome\n";
                cout << "3. 500 miles\n";
                cout << "4. Bye Bye Bye\n";
                cout << "5. Sunflower\n";
                cout << "\n\n=========HINDI SONGS===========\n";
                cout << "6. Udi Udi\n";
                cout << "7. Sapphire\n";
                cout << "8. Ilahi\n";
                cout << "9. PHIR SE\n";
                cout << "10. Raanjhan\n";
                cout << "\n\n==========OLD SONGS============\n";
                cout << "11. Falak Tak\n";
                cout << "12. Dil Yeh Kaha Hain Dil Se \n";
                cout << "13. Aaye Ho Meri Zindagi Mein\n";
                cout << "14. Papa Kehte Hein Bada Naam Karega \n";
                cout << "15. Jo Bhi Kasmein Khai Thi Humne \n";
                cout << "16. Main Yahaan Hoon";
                cout << "\n\n========TRENDING SONGS=========\n";
                cout << "17. KALYANI\n";
                cout << "18. Bairan\n";
                cout << "19. FOR A REASON\n";
                cout << "20. Sahiba Lyrics\n";
                cout << "21. Jaiye Sajana\n";

                cout << "\nEnter song number: ";
                cin >> songChoice;
                mciSendString("stop song", NULL, 0, NULL);
                mciSendString("close song", NULL, 0, NULL);

                string command;

                switch(songChoice)
                {
                    case 1:
                        command = "open \"Music/Tokyo Drift.mp3\" type mpegvideo alias song";
                        break;

                    case 2:
                        command = "open \"Music/Impostor Syndrome.mp3\" type mpegvideo alias song";
                        break;

                    case 3:
                        command = "open \"Music/500 miles.mp3\" type mpegvideo alias song";
                        break;

                    case 4:
                        command = "open \"Music/Bye Bye Bye.mp3\" type mpegvideo alias song";
                        break;

                    case 5:
                        command = "open \"Music/Sunflower.mp3\" type mpegvideo alias song";
                        break;
                    case 6:
                        command = "open \"Music/Udi Udi.mp3\" type mpegvideo alias song";
                        break;

                    case 7:
                        command = "open \"Music/Sapphire.mp3\" type mpegvideo alias song";
                        break;

                    case 8:
                        command = "open \"Music/Ilahi.mp3\" type mpegvideo alias song";
                        break;

                    case 9:
                        command = "open \"Music/PHIR SE.mp3\" type mpegvideo alias song";
                        break;
                    case 10:
                        command = "open \"Music/Raanjhan.mp3\" type mpegvideo alias song";
                        break;

                    case 11:
                        command = "open \"Music/Falak Tak.mp3\" type mpegvideo alias song";
                        break;

                    case 12:
                        command = "open \"Music/Dil Ne Yeh Kaha Hain Dil Se.mp3\" type mpegvideo alias song";
                        break;

                    case 13:
                        command = "open \"Music/Aaye Ho Meri Zindagi Mein.mp3\" type mpegvideo alias song";
                        break;
                    case 14:
                        command = "open \"Music/Papa Kehte Hain Bada Naam Karega.mp3\" type mpegvideo alias song";
                        break;

                    case 15:
                        command = "open \"Music/Jo Bhi Kasmein Khai Thi Humne.mp3\" type mpegvideo alias song";
                        break;

                    case 16:
                        command = "open \"Music/Main Yahaan Hoon.mp3\" type mpegvideo alias song";
                        break;

                    case 17:
                        command = "open \"Music/KALYANI.mp3\" type mpegvideo alias song";
                        break;
                        
                    case 18:
                        command = "open \"Music/Bairan.mp3\" type mpegvideo alias song";
                        break;

                    case 19:
                        command = "open \"Music/FOR A REASON.mp3\" type mpegvideo alias song";
                        break;

                    case 20:
                        command = "open \"Music/Sahiba Lyrics.mp3\" type mpegvideo alias song";
                        break;

                    case 21:
                        command = "open \"Music/Jaiye Sajana.mp3\" type mpegvideo alias song";
                        break;

                    default:
                        cout << "\nInvalid song number!\n TRY AGAIN!!";
                        system("pause");
                        continue;
                }

                MCIERROR result = mciSendString(
                    command.c_str(),
                    NULL,
                    0,
                    NULL
                );

                if(result != 0)
                {
                    mciGetErrorString(result, error, 256);
                    cout << "\nERROR: " << error << endl;
                }
                else
                {
                    mciSendString("play song", NULL, 0, NULL);
                    cout << "\nPlaying song  :3\n";
                }

                break;
            }

            case 3:
                mciSendString("pause song", NULL, 0, NULL);
                cout << "\nSong paused. :(";
                break;

            case 4:{ 
            int songChoice;

      currentSong = songChoice;
        
    if(currentSong == 0)
    {
        cout << "\nNo song is currently playing.";
        break;
    }

    currentSong++;

    if(currentSong > 21)
    {
        currentSong = 1;
    }

    mciSendString("stop song", NULL, 0, NULL);
    mciSendString("close song", NULL, 0, NULL);

    string command;

    switch(currentSong)
    {
        case 1:
            command = "open \"Music/Tokyo Drift.mp3\" type mpegvideo alias song";
            break;

        case 2:
            command = "open \"Music/Impostor Syndrome.mp3\" type mpegvideo alias song";
            break;

        case 3:
            command = "open \"Music/500 miles.mp3\" type mpegvideo alias song";
            break;

        case 4:
            command = "open \"Music/Bye Bye Bye.mp3\" type mpegvideo alias song";
            break;

        case 5:
            command = "open \"Music/Sunflower.mp3\" type mpegvideo alias song";
            break;

        case 6:
            command = "open \"Music/Udi Udi.mp3\" type mpegvideo alias song";
            break;

        case 7:
            command = "open \"Music/Sapphire.mp3\" type mpegvideo alias song";
            break;

        case 8:
            command = "open \"Music/Ilahi.mp3\" type mpegvideo alias song";
            break;

        case 9:
            command = "open \"Music/PHIR SE.mp3\" type mpegvideo alias song";
            break;

        case 10:
            command = "open \"Music/Raanjhan.mp3\" type mpegvideo alias song";
            break;

        case 11:
            command = "open \"Music/Falak Tak.mp3\" type mpegvideo alias song";
            break;

        case 12:
            command = "open \"Music/Dil Ne Yeh Kaha Hain Dil Se.mp3\" type mpegvideo alias song";
            break;

        case 13:
            command = "open \"Music/Aaye Ho Meri Zindagi Mein.mp3\" type mpegvideo alias song";
            break;

        case 14:
            command = "open \"Music/Papa Kehte Hain Bada Naam Karega.mp3\" type mpegvideo alias song";
            break;

        case 15:
            command = "open \"Music/Jo Bhi Kasmein Khai Thi Humne.mp3\" type mpegvideo alias song";
            break;

        case 16:
            command = "open \"Music/Main Yahaan Hoon.mp3\" type mpegvideo alias song";
            break;

        case 17:
            command = "open \"Music/KALYANI.mp3\" type mpegvideo alias song";
            break;

        case 18:
            command = "open \"Music/Bairan.mp3\" type mpegvideo alias song";
            break;

        case 19:
            command = "open \"Music/FOR A REASON.mp3\" type mpegvideo alias song";
            break;

        case 20:
            command = "open \"Music/Sahiba Lyrics.mp3\" type mpegvideo alias song";
            break;

        case 21:
            command = "open \"Music/Jaiye Sajana.mp3\" type mpegvideo alias song";
            break;
    }

    MCIERROR result = mciSendString(
        command.c_str(),
        NULL,
        0,
        NULL
    );

    if(result != 0)
    {
        mciGetErrorString(result, error, 256);
        cout << "\nERROR: " << error << endl;
    }
    else
    {
        mciSendString("play song", NULL, 0, NULL);
        cout << "\nNext song is playing....";
    }

    break;
}

    case 5:{
    	int songChoice;
		cout<<"\nEnter current song number";
		cin>>songChoice;	
		currentSong = songChoice;
    if(currentSong == 0)
    {
        cout << "\nNo song is currently playing.";
        break;
    }

    currentSong--;

    if(currentSong < 1)
    {
        currentSong = 21;
    }

    mciSendString("stop song", NULL, 0, NULL);
    mciSendString("close song", NULL, 0, NULL);

    string command;

    switch(currentSong)
    {
        case 1:
            command = "open \"Music/Tokyo Drift.mp3\" type mpegvideo alias song";
            break;

        case 2:
            command = "open \"Music/Impostor Syndrome.mp3\" type mpegvideo alias song";
            break;

        case 3:
            command = "open \"Music/500 miles.mp3\" type mpegvideo alias song";
            break;

        case 4:
            command = "open \"Music/Bye Bye Bye.mp3\" type mpegvideo alias song";
            break;

        case 5:
            command = "open \"Music/Sunflower.mp3\" type mpegvideo alias song";
            break;

        case 6:
            command = "open \"Music/Udi Udi.mp3\" type mpegvideo alias song";
            break;

        case 7:
            command = "open \"Music/Sapphire.mp3\" type mpegvideo alias song";
            break;

        case 8:
            command = "open \"Music/Ilahi.mp3\" type mpegvideo alias song";
            break;

        case 9:
            command = "open \"Music/PHIR SE.mp3\" type mpegvideo alias song";
            break;

        case 10:
            command = "open \"Music/Raanjhan.mp3\" type mpegvideo alias song";
            break;

        case 11:
            command = "open \"Music/Falak Tak.mp3\" type mpegvideo alias song";
            break;

        case 12:
            command = "open \"Music/Dil Ne Yeh Kaha Hain Dil Se.mp3\" type mpegvideo alias song";
            break;

        case 13:
            command = "open \"Music/Aaye Ho Meri Zindagi Mein.mp3\" type mpegvideo alias song";
            break;

        case 14:
            command = "open \"Music/Papa Kehte Hain Bada Naam Karega.mp3\" type mpegvideo alias song";
            break;

        case 15:
            command = "open \"Music/Jo Bhi Kasmein Khai Thi Humne.mp3\" type mpegvideo alias song";
            break;

        case 16:
            command = "open \"Music/Main Yahaan Hoon.mp3\" type mpegvideo alias song";
            break;

        case 17:
            command = "open \"Music/KALYANI.mp3\" type mpegvideo alias song";
            break;

        case 18:
            command = "open \"Music/Bairan.mp3\" type mpegvideo alias song";
            break;

        case 19:
            command = "open \"Music/FOR A REASON.mp3\" type mpegvideo alias song";
            break;

        case 20:
            command = "open \"Music/Sahiba Lyrics.mp3\" type mpegvideo alias song";
            break;

        case 21:
            command = "open \"Music/Jaiye Sajana.mp3\" type mpegvideo alias song";
            break;
    }

    MCIERROR result = mciSendString(
        command.c_str(),
        NULL,
        0,
        NULL
    );

    if(result != 0)
    {
        mciGetErrorString(result, error, 256);
        cout << "\nERROR: " << error << endl;
    }
    else
    {
        mciSendString("play song", NULL, 0, NULL);
        cout << "\nPrevious song is playing....";
    }

    break;
}
    case 6:
{
    currentSong = rand() % 21 + 1;

    cout << "\nShuffle selected!";
    cout << "\nRandom song number: " << currentSong << endl;

    mciSendString("stop song", NULL, 0, NULL);
    mciSendString("close song", NULL, 0, NULL);

    string command;

    switch(currentSong)
    {
        case 1:
            command = "open \"Music/Tokyo Drift.mp3\" type mpegvideo alias song";
            break;

        case 2:
            command = "open \"Music/Impostor Syndrome.mp3\" type mpegvideo alias song";
            break;

        case 3:
            command = "open \"Music/500 miles.mp3\" type mpegvideo alias song";
            break;

        case 4:
            command = "open \"Music/Bye Bye Bye.mp3\" type mpegvideo alias song";
            break;

        case 5:
            command = "open \"Music/Sunflower.mp3\" type mpegvideo alias song";
            break;

        case 6:
            command = "open \"Music/Udi Udi.mp3\" type mpegvideo alias song";
            break;

        case 7:
            command = "open \"Music/Sapphire.mp3\" type mpegvideo alias song";
            break;

        case 8:
            command = "open \"Music/Ilahi.mp3\" type mpegvideo alias song";
            break;

        case 9:
            command = "open \"Music/PHIR SE.mp3\" type mpegvideo alias song";
            break;

        case 10:
            command = "open \"Music/Raanjhan.mp3\" type mpegvideo alias song";
            break;

        case 11:
            command = "open \"Music/Falak Tak.mp3\" type mpegvideo alias song";
            break;

        case 12:
            command = "open \"Music/Dil Ne Yeh Kaha Hain Dil Se.mp3\" type mpegvideo alias song";
            break;

        case 13:
            command = "open \"Music/Aaye Ho Meri Zindagi Mein.mp3\" type mpegvideo alias song";
            break;

        case 14:
            command = "open \"Music/Papa Kehte Hain Bada Naam Karega.mp3\" type mpegvideo alias song";
            break;

        case 15:
            command = "open \"Music/Jo Bhi Kasmein Khai Thi Humne.mp3\" type mpegvideo alias song";
            break;

        case 16:
            command = "open \"Music/Main Yahaan Hoon.mp3\" type mpegvideo alias song";
            break;

        case 17:
            command = "open \"Music/KALYANI.mp3\" type mpegvideo alias song";
            break;

        case 18:
            command = "open \"Music/Bairan.mp3\" type mpegvideo alias song";
            break;

        case 19:
            command = "open \"Music/FOR A REASON.mp3\" type mpegvideo alias song";
            break;

        case 20:
            command = "open \"Music/Sahiba Lyrics.mp3\" type mpegvideo alias song";
            break;

        case 21:
            command = "open \"Music/Jaiye Sajana.mp3\" type mpegvideo alias song";
            break;
    }

    MCIERROR result = mciSendString(
        command.c_str(),
        NULL,
        0,
        NULL
    );

    if(result != 0)
    {
        mciGetErrorString(result, error, 256);
        cout << "\nERROR: " << error << endl;
    }
    else
    {
        mciSendString("play song", NULL, 0, NULL);
        cout << "\nRandom song is playing!";
    }

    break;
}  
     case 7:
     	
{
    string search;

    cout << "\n========== SEARCH SONG ==========\n";
    cout << "Enter song name: ";

    cin.ignore();
    getline(cin, search);

    string command;
    string songName;
    bool found = false;

    if(search == "Tokyo Drift"||search == "tokyo drift")
    {
        songName = "Tokyo Drift";
        command = "open \"Music/Tokyo Drift.mp3\" type mpegvideo alias song";
        found = true;
    }
    else if(search == "Impostor Syndrome"||search == "imposter syndrome")
    {
        songName = "Impostor Syndrome";
        command = "open \"Music/Impostor Syndrome.mp3\" type mpegvideo alias song";
        found = true;
    }
    else if(search == "500 miles"||search == "500 Miles")
    {
        songName = "500 miles";
        command = "open \"Music/500 miles.mp3\" type mpegvideo alias song";
        found = true;
    }
    else if(search == "Bye Bye Bye" ||search == "bye bye bye")
    {
        songName = "Bye Bye Bye";
        command = "open \"Music/Bye Bye Bye.mp3\" type mpegvideo alias song";
        found = true;
    }
    else if(search == "Sunflower" ||search == "sunflower")
    {
        songName = "Sunflower";
        command = "open \"Music/Sunflower.mp3\" type mpegvideo alias song";
        found = true;
    }
    else if(search == "Udi Udi"|| search == "udi udi")
    {
        songName = "Udi Udi";
        command = "open \"Music/Udi Udi.mp3\" type mpegvideo alias song";
        found = true;
    }
    else if(search == "Sapphire"|| search =="sapphire")
    {
        songName = "Sapphire";
        command = "open \"Music/Sapphire.mp3\" type mpegvideo alias song";
        found = true;
    }
    else if(search == "Ilahi"|| search == " ilahi")
    {
        songName = "Ilahi";
        command = "open \"Music/Ilahi.mp3\" type mpegvideo alias song";
        found = true;
    }
    else if(search == "Phir Se" || search== "phir se")
    {
        songName = "PHIR SE";
        command = "open \"Music/PHIR SE.mp3\" type mpegvideo alias song";
        found = true;
    }
    else if(search == "Raanjhan"|| search == "raanjhan")
    {
        songName = "Raanjhan";
        command = "open \"Music/Raanjhan.mp3\" type mpegvideo alias song";
        found = true;
    }
    else if(search == "Falak Tak"|| search == " falak tak")
    {
        songName = "Falak Tak";
        command = "open \"Music/Falak Tak.mp3\" type mpegvideo alias song";
        found = true;
    }
    else if(search == "Dil Yeh Kaha Hain Dil Se"||search == "dil yeh kaha hain dil se")
    {
        songName = "Dil Yeh Kaha Hain Dil Se";
        command = "open \"Music/Dil Ne Yeh Kaha Hain Dil Se.mp3\" type mpegvideo alias song";
        found = true;
    }
    else if(search == "Aaye Ho Meri Zindagi Mein"||search == "aaye ho meri zindagi mein")
    {
        songName = "Aaye Ho Meri Zindagi Mein";
        command = "open \"Music/Aaye Ho Meri Zindagi Mein.mp3\" type mpegvideo alias song";
        found = true;
    }
    else if(search == "Papa Kehte Hain Bada Naam Karega"||search == "papa kehte hain bada naam karega")
    {
        songName = "Papa Kehte Hain Bada Naam Karega";
        command = "open \"Music/Papa Kehte Hain Bada Naam Karega.mp3\" type mpegvideo alias song";
        found = true;
    }
    else if(search == "Jo Bhi Kasmein Khai Thi Humne"||search == "jo bhi kasmein khai thi humne")
    {
        songName = "Jo Bhi Kasmein Khai Thi Humne";
        command = "open \"Music/Jo Bhi Kasmein Khai Thi Humne.mp3\" type mpegvideo alias song";
        found = true;
    }
    else if(search == "Main Yahaan Hoon"||search == "main yahaan hoon")
    {
        songName = "Main Yahaan Hoon";
        command = "open \"Music/Main Yahaan Hoon.mp3\" type mpegvideo alias song";
        found = true;
    }
    else if(search == "KALYANI"||search == "kalyani" ||search == "Kalyani")
    {
        songName = "KALYANI";
        command = "open \"Music/KALYANI.mp3\" type mpegvideo alias song";
        found = true;
    }
    else if(search == "Bairan"||search == "bairan")
    {
        songName = "Bairan";
        command = "open \"Music/Bairan.mp3\" type mpegvideo alias song";
        found = true;
    }
    else if(search == "FOR A REASON"||search == "for a reason"||search == "For A Reason")
    {
        songName = "FOR A REASON";
        command = "open \"Music/FOR A REASON.mp3\" type mpegvideo alias song";
        found = true;
    }
    else if(search == "Sahiba Lyrics"||search == "sahiba lyrics")
    {
        songName = "Sahiba Lyrics";
        command = "open \"Music/Sahiba Lyrics.mp3\" type mpegvideo alias song";
        found = true;
    }
    else if(search == "Jaiye Sajana"||search == "jaiye sajana")
    {
        songName = "Jaiye Sajana";
        command = "open \"Music/Jaiye Sajana.mp3\" type mpegvideo alias song";
        found = true;
    }

    if(found)
    {
        cout << "\nSong Found!";
        cout << "\n1. " << songName;

        char playChoice;

        cout << "\n\nPlay this song? (Y/N): ";
        cin >> playChoice;

        if(playChoice == 'Y' || playChoice == 'y')
        {
            mciSendString("stop song", NULL, 0, NULL);
            mciSendString("close song", NULL, 0, NULL);

            MCIERROR result = mciSendString(
                command.c_str(),
                NULL,
                0,
                NULL
            );

            if(result != 0)
            {
                mciGetErrorString(result, error, 256);
                cout << "\nERROR: " << error << endl;
            }
            else
            {
                mciSendString("play song", NULL, 0, NULL);

                cout << "\nPlaying " << songName << "   >:)";
            }
        }
        else
        {
            cout << "\nSong not played.";
        }
    }
    else
    {
        cout << "\nSong not found!";
    }

    break;
}
            case 8:
                mciSendString("stop song", NULL, 0, NULL);
                mciSendString("close song", NULL, 0, NULL);

                cout << "\nThank you for using(ULTIMATEZ..)Mz Player    :)";
                cout<<  "\n\nDOUBLE press Enter to exit.......";
                cin.get();
                cin.get();
                return 0;

            default:
                cout << "\nInvalid choice ?_? \nCHOOSE AGAIN!!!";
        }

        cout << "\n\n";
        system("pause");
    }

    return 0;
}
