#ifndef PLAYER_H
#define PLAYER_H

class Player
{
public:
    int val_study; //学术值
    int val_person; //人缘值
    int val_health; //健康值
    void init_val(); //初始化值为5

    void val_person_add(int num); //增加 参数可以为负值 人缘值
    void val_study_add(int num);
    void val_health_add(int num);

    int get_val_person();
    int get_val_study();
    int get_val_health();

    void ShowValue();

};

extern Player P1;
extern int window_w;
extern int window_h;

extern int btn_w;
extern int btn_h;

#endif // PLAYER_H
