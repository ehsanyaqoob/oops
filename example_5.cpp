#include"msoftcon.h"

class circle{
    protected:
    int xco,yco;
    int radius;
    color fillcolor;
    fstyle fillstyle;
    public:
        circle(int x, int y, int r, color fc, fstyle fs) : xco(x), yco(y), radius(r), fillcolor(fc), fillstyle(fs)
        {

        }


        void draw(){
            set_color(fillcolor);
            set_fill_fillstyle(fillstyle);
            draw_circle(xco, yco, radius);

        }
};
int main(){
    init_graphics();
    circle c1(15,7,5,cBlue,X_fill);
    circle c2(41,12,7,cRed,O_fill);
    circle c3(65, 18,4,cGReen,medium_fill);
    c1.draw();
    c2.draw();
    c3.draw();
    set_cursor_pos(1,25);

    return 0;
}