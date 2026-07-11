# esp_lvgl_games

基于百问网和b站@老虎爱3D的lvgl小游戏，适配到ESP-IDF框架，包含 2048、羊了个羊、消消乐、植物大战僵尸四款游戏。

# 安装组件
- 在 `main/idf_component.yml` 中添加以下内容：
    ```yaml
    dependencies:
      lee-stone/esp_lvgl_games:
        git: https://github.com/Lee-Stone/esp_lvgl_games.git
    ```
- 然后运行 `idf.py build` 即可自动下载组件。

# 运行游戏示例
- 在源代码中包含头文件：
    ```c
    #include "lv_games.h"
    ```
- 运行 `2048小游戏` 示例：
    ```c
    lv_obj_t * game2048 = lv_obj_create(lv_scr_act());
    lv_games_2048(game2048);
    ```
- 运行 `羊了个羊` 示例：
    ```c
    lv_obj_t * yang = lv_obj_create(lv_scr_act());
    lv_games_yang(yang);
    ```
- 运行 `消消乐` 示例：
    ```c
    lv_obj_t * xiaoxiaole = lv_obj_create(lv_scr_act());
    lv_games_xiaoxiaole(xiaoxiaole);
    ```
- 运行 `植物大战僵尸` 示例：
    ```c
    lv_obj_t * pvz = lv_obj_create(lv_scr_act());
    lv_games_pvz(pvz);
    ```

# 注意事项
- 依赖 LVGL v8.3.x，通过 `lvgl/lvgl: ^8.3.11` 自动引入
- 需要启用 LVGL 字体 `CONFIG_LV_FONT_MONTSERRAT_18=y`
- 游戏源码来自开源社区，仅做 ESP-IDF 组件化适配

