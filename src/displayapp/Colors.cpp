#include "displayapp/Colors.h"
#include "displayapp/InfiniTimeTheme.h"

using namespace Pinetime::Applications;
using namespace Pinetime::Controllers;

lv_color_t Pinetime::Applications::Convert(Pinetime::Controllers::Settings::Colors color) {
  switch (color) {
    case Pinetime::Controllers::Settings::Colors::White:
      return LV_COLOR_WHITE;
    case Pinetime::Controllers::Settings::Colors::Silver:
      return LV_COLOR_SILVER;
    case Pinetime::Controllers::Settings::Colors::Gray:
      return LV_COLOR_GRAY;
    case Pinetime::Controllers::Settings::Colors::Black:
      return LV_COLOR_BLACK;
    case Pinetime::Controllers::Settings::Colors::Rosewater:
      return Colors::rosewater;
    case Pinetime::Controllers::Settings::Colors::Flamingo:
      return Colors::flamingo;
    case Pinetime::Controllers::Settings::Colors::Pink:
      return Colors::pink;
    case Pinetime::Controllers::Settings::Colors::Mauve:
      return Colors::mauve;
    case Pinetime::Controllers::Settings::Colors::Red:
      return Colors::red;
    case Pinetime::Controllers::Settings::Colors::Maroon:
      return Colors::maroon;
    case Pinetime::Controllers::Settings::Colors::Peach:
      return Colors::peach;
    case Pinetime::Controllers::Settings::Colors::Yellow:
      return Colors::yellow;
    case Pinetime::Controllers::Settings::Colors::Green:
      return Colors::green;
    case Pinetime::Controllers::Settings::Colors::Teal:
      return Colors::teal;
    case Pinetime::Controllers::Settings::Colors::Sky:
      return Colors::sky;
    case Pinetime::Controllers::Settings::Colors::Sapphire:
      return Colors::sapphire;
    case Pinetime::Controllers::Settings::Colors::Blue:
      return Colors::blue;
    case Pinetime::Controllers::Settings::Colors::Lavander:
      return Colors::lavander;
    default:
      return LV_COLOR_WHITE;
  }
}
