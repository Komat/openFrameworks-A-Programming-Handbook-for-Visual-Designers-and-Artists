/**
 * @description
 * @author komatsu
 * @date 7/27/16
 * @version 0.0.0
 */

#ifndef EX_02_COLLAGE_2_ELEMENT_H
#define EX_02_COLLAGE_2_ELEMENT_H


#include <ofMain.h>


class Element {

private:
    float x, y, a;
    ofImage img;

public:
    void refresh();
    void load(string imgName);
    void display(void);
};


#endif //EX_02_COLLAGE_2_ELEMENT_H
