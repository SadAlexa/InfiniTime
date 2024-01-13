#pragma once

#include <lvgl/lvgl.h>

namespace Colors {
  static constexpr lv_color_t deepOrange = LV_COLOR_MAKE(0xff, 0x40, 0x0);
  static constexpr lv_color_t orange = LV_COLOR_MAKE(0xff, 0xb0, 0x0);
  // static constexpr lv_color_t green = LV_COLOR_MAKE(0x0, 0xb0, 0x0);
  // static constexpr lv_color_t blue = LV_COLOR_MAKE(0x0, 0x50, 0xff);
  static constexpr lv_color_t lightGray = LV_COLOR_MAKE(0xb0, 0xb0, 0xb0);


  static constexpr lv_color_t bg = LV_COLOR_MAKE(0x5d, 0x69, 0x7e);
  static constexpr lv_color_t bgAlt = LV_COLOR_MAKE(0x38, 0x38, 0x38);
  static constexpr lv_color_t bgDark = LV_COLOR_MAKE(0x18, 0x18, 0x18);


  // mine colors
  static constexpr lv_color_t rosewater = LV_COLOR_MAKE(0xF5, 0xE0, 0xDC);
  static constexpr lv_color_t flamingo = LV_COLOR_MAKE(0xF2, 0xCD, 0xCD);
  static constexpr lv_color_t pink = LV_COLOR_MAKE(0xF5, 0xC2, 0xE7);
  static constexpr lv_color_t mauve = LV_COLOR_MAKE(0xCB, 0xA6, 0xF7);
  static constexpr lv_color_t red = LV_COLOR_MAKE(0xF3, 0x8B, 0xA8);
  static constexpr lv_color_t maroon = LV_COLOR_MAKE(0xEB, 0xA0, 0xAC);
  static constexpr lv_color_t peach = LV_COLOR_MAKE(0xFA, 0xB3, 0x87);
  static constexpr lv_color_t yellow = LV_COLOR_MAKE(0xF9, 0xE2, 0xAF);
  static constexpr lv_color_t green = LV_COLOR_MAKE(0xA6, 0xE3, 0xA1);
  static constexpr lv_color_t teal = LV_COLOR_MAKE(0x94, 0xE2, 0xD5);
  static constexpr lv_color_t sky = LV_COLOR_MAKE(0x89, 0xDC, 0xEB);
  static constexpr lv_color_t sapphire = LV_COLOR_MAKE(0x74, 0xC7, 0xEC);
  static constexpr lv_color_t blue = LV_COLOR_MAKE(0x89, 0xB4, 0xFA);
  static constexpr lv_color_t lavander = LV_COLOR_MAKE(0xB4, 0xBE, 0xFE);

  



  static constexpr lv_color_t highlight = mauve;
};

/**
 * Initialize the default
 * @param color_primary the primary color of the theme
 * @param color_secondary the secondary color for the theme
 * @param flags ORed flags starting with `LV_THEME_DEF_FLAG_...`
 * @param font_small pointer to a small font
 * @param font_normal pointer to a normal font
 * @param font_subtitle pointer to a large font
 * @param font_title pointer to a extra large font
 * @return a pointer to reference this theme later
 */
lv_theme_t* lv_pinetime_theme_init();
