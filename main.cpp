
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

struct Main_Charact
{
    string Series;
    string Type_of_Headphone;
    string Type_of_Conection;
    string Fastening;
    bool Adjustable_Headband;
    bool Rotary_Cups;
    string Emitter_Design;
    bool Volume_Control;
    void Output()
        {

        }
        void Input()
        {
            Series = "Airpods Max";
            Type_of_Headphone = "Повнорозмірні(повний обхват вуха)";
            Type_of_Conection = "Бездротові";
            Fastening = "Оголів'я";
            Adjustable_Headband = true;
            Rotary_Cups = true;
            Emitter_Design = "Динамічні";
            Volume_Control = true;
            cout << "ОСНОВНІ ХАРАКТЕРИСТИКИ Apple Airpods Max Sky Blue " << endl << endl;
            cout << "Series " << "....................................."<< Series << endl;
            cout << "Type of Headphone " << ".........................."<< Type_of_Headphone << endl;
            cout << "Type of Conection " << ".........................."<< Type_of_Conection << endl;
            cout << "Fastening " << ".................................."<< Fastening << endl;
            if (Adjustable_Headband == true)
            {
            cout << "Adjustable Headband " << "........................"<< "Так " << endl;
            }
            if (Rotary_Cups == true)
            {
            cout << "Rotary Cups " << "................................"<< "Так " << endl;
            }
            cout << "Emitter Design " << "............................."<< Emitter_Design << endl;
            if (Volume_Control == true)
            {
            cout << "Volume Control " << "............................."<< "Так " << endl << endl << endl;
            }
        }
};
struct Microphone
{
    bool Microphone;
    string Microphone_Design;
    bool Active_Noise_Reduction;
    void Output()
        {

        }
    void Input()
        {
            Microphone = true;
            Microphone_Design = "Вбудований в корпус навушників";
            Active_Noise_Reduction = true;
            cout << "МІКРОФОН" << endl << endl;
            if (Microphone == true)
            {
            cout << "Microphone " << "................................."<< "Так " << endl;
            }

            cout << "Microphone Design " << ".........................."<< Microphone_Design << endl;
            if (Active_Noise_Reduction == true)
            {
            cout << "Active Noise Reduction " << "....................."<< "Так " << endl << endl << endl;
            }
            
        }
};
struct Phusical_Charact
{
    string Body_Material;
    string Bridle_Material;
    string Manufacturer_Color;
    string Complete_Set;
    float Weight;
    string Warranty_Period;
    string Brand;
    void Output()
    {

    }
        void Input()
    {
            Body_Material = "Пластик";
            Bridle_Material = "Нержавіюча сталь, тканина";
            Manufacturer_Color = "Блакитний";
            Complete_Set = "Навушники \n"
            "                                            Інструкція \n"
            "                                            Гарантійний талон \n"
            "                                            Кабель Lightning \n"
            "                                            Чохол для зберігання навушників";
            Weight = 385;
            Warranty_Period = "1 рік";
            Brand = "Apple";
            cout << "ФІЗИЧНІ ХАРАКТЕРИСТИКИ" << endl << endl;
            cout << "Body Material " << ".............................."<< Body_Material << endl;
            cout << "Bridle Material " << "............................"<< Bridle_Material << endl;
            cout << "Manufacturer Color " << "........................."<< Manufacturer_Color << endl;
            cout << "Complete Set " << "..............................."<< Complete_Set << endl;
            cout << "Weight " << "....................................."<< Weight << endl;
            cout << "Warranty Period " << "............................"<< Warranty_Period << endl;
            cout << "Brand " << "......................................"<< Brand << endl;
    }
};
struct Airpods_Max
{
    Main_Charact Main_Charact_;
    Microphone Microphone_;
    Phusical_Charact Phusical_Charact_;
    void Output()
        {
            Main_Charact_.Output();
            Microphone_.Output();
            Phusical_Charact_.Output();
        }
    void Input()
    {
        Main_Charact_.Input();
        Microphone_.Input();
        Phusical_Charact_.Input();
    }
};

int main()
{
    Airpods_Max* Airpods_Max = new struct Airpods_Max;
    Airpods_Max->Input();
    system("cls");
    Airpods_Max->Output();
    return 0;
}
