// Exercices from course https://www.youtube.com/watch?v=_bYFu9mBnr4

#include <iostream>
using namespace std;

int area_superficie (int comprimento, int largura, int altura)
{
    int area; // Result
    area = 2 * (comprimento * largura + comprimento * altura + largura * altura);
    return area;
}

int volume_total (int comprimento, int largura, int altura)
{
    int volume; // Result
    volume = comprimento * largura * altura;
    return volume;
}

int main()
{
    int l, w, h;
    cout << "Imagin that you have a solid. What big is it?" << endl;
    cout << "Lenght: ";
    cin >> l;
    cout << "Width: ";
    cin >> w;
    cout << "Height: ";
    cin >> h;
    
    int area = area_superficie (l, w, h);
    int volume = volume_total (l, w, h);
    cout << "This solid has " << area << " units of area and " << volume << " units of volume.";

}