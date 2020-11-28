#ifndef SPRITE_GAME_SPRITE_USR_H
#define SPRITE_GAME_SPRITE_USR_H
#include "sprite_base.h"

class sprite_usr : public sprite_base {
private:
    int score;
public:
    sprite_usr(int p_x, int p_y, ACL_Image *p_img, int width, int height, int speed);
    ~sprite_usr() override;
    void move() override;
    void move(int key);
    int get_score() const;
};


#endif //SPRITE_GAME_SPRITE_USR_H
