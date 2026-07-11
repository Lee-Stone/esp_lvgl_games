#ifndef LV_GAMES_H
#define LV_GAMES_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

#include "lv_100ask_2048/game2048.h"
#include "yang/yang.h"
#include "xiaoxiaole/xiaoxiaole.h"
#include "pvz/pvz.h"

/**
 * @brief 启动 2048 游戏
 * @param parent  LVGL 父对象
 */
#define lv_games_2048(parent)       lv_100ask_2048_simple_test(parent)

/**
 * @brief 启动羊了个羊（卡牌消除）游戏
 * @param parent  LVGL 父对象
 */
#define lv_games_yang(parent)       yang_game(parent)

/**
 * @brief 启动消消乐（三消）游戏
 * @param parent  LVGL 父对象
 */
#define lv_games_xiaoxiaole(parent) xiaoxiaole(parent)

/**
 * @brief 启动植物大战僵尸游戏
 * @param parent  LVGL 父对象
 */
#define lv_games_pvz(parent)        pvz_start(parent)

/* 兼容旧宏名 */
#define game2048_update(x)    lv_games_2048(x)
#define yang_update(x)        lv_games_yang(x)
#define xiaoxiaole_update(x)  lv_games_xiaoxiaole(x)
#define pvz_update(x)         lv_games_pvz(x)

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*LV_GAMES_H*/
