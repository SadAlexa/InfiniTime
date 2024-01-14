#pragma once

#include <array>
#include <memory>
#include "displayapp/screens/Screen.h"
#include "displayapp/screens/ScreenList.h"
#include "displayapp/screens/Symbols.h"
#include "displayapp/screens/List.h"

namespace Pinetime {

  namespace Applications {
    namespace Screens {

      class Settings : public Screen {
      public:
        Settings(DisplayApp* app, Pinetime::Controllers::Settings& settingsController);
        ~Settings() override;

        bool OnTouchEvent(Pinetime::Applications::TouchEvents event) override;

      private:
        DisplayApp* app;
        auto CreateScreenList() const;
        std::unique_ptr<Screen> CreateScreen(unsigned int screenNum) const;

        Controllers::Settings& settingsController;

        static constexpr int entriesPerScreen = 4;

        // Increment this when more space is needed
        static constexpr int nScreens = 4;

        static constexpr std::array<List::Applications, entriesPerScreen * nScreens> entries {{
          {Symbols::sun, "Schermo", Apps::SettingDisplay},
          {Symbols::eye, "Risveglio", Apps::SettingWakeUp},
          {Symbols::clock, "Formato ora", Apps::SettingTimeFormat},
          {Symbols::home, "Watch face", Apps::SettingWatchFace},

          {Symbols::shoe, "Passi", Apps::SettingSteps},
          {Symbols::clock, "Data e Ora", Apps::SettingSetDateTime},
          {Symbols::cloudSunRain, "Meteo", Apps::SettingWeatherFormat},
          {Symbols::batteryHalf, "Batteria", Apps::BatteryInfo},

          {Symbols::clock, "Chimes", Apps::SettingChimes},
          {Symbols::tachometer, "Scuoti Calib.", Apps::SettingShakeThreshold},
          {Symbols::check, "Firmware", Apps::FirmwareValidation},
          {Symbols::bluetooth, "Bluetooth", Apps::SettingBluetooth},

          {Symbols::list, "Info", Apps::SysInfo},

          // {Symbols::none, "None", Apps::None},
          // {Symbols::none, "None", Apps::None},
          // {Symbols::none, "None", Apps::None},
          // {Symbols::none, "None", Apps::None},

        }};
        ScreenList<nScreens> screens;
      };
    }
  }
}
