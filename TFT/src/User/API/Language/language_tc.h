#ifndef _LANGUAGE_TC_H_
#define _LANGUAGE_TC_H_

    #define TC_LANGUAGE               "正體中文"
    #define TC_HEAT                   "加熱"
    #define TC_MOVE                   "移動"
    #define TC_HOME                   "回原點"
    #define TC_DISABLE_STEPPERS       "解鎖電機"
    #define TC_PRINT                  "列印"
    #define TC_EXTRUDE                "擠出"
    #define TC_FAN                    "風扇"
    #define TC_SETTINGS               "設定"
    #define TC_SCREEN_SETTINGS        "螢幕設定"
    #define TC_MACHINE_SETTINGS       "機器設定"
    #define TC_FEATURE_SETTINGS       "功能設定"
    #define TC_SOUND                  "聲音"
    #define TC_TOUCH_SOUND            "按鈕聲音"
    #define TC_TOAST_SOUND            "Toast 提示聲音"
    #define TC_ALERT_SOUND            "彈窗和提示聲音"
    #define TC_SHUT_DOWN              "關閉電源"
    #define TC_RGB_SETTINGS           "燈光顏色"
    #define TC_RGB_OFF                "關閉燈光"
    #define TC_TERMINAL               "終端"
    #define TC_CUSTOM                 "自定義"
    #define TC_LEVELING               "調平"
    #define TC_POINT_1                "第一點"
    #define TC_POINT_2                "第二點"
    #define TC_POINT_3                "第三點"
    #define TC_POINT_4                "第四點"
    #define TC_POINT_5                "第五點"
    #define TC_ABL                    "自動調平"
    #define TC_ABL_COMPLETE           "平臺調平完成!"
    #define TC_ABL_SMART_FILL         "部分點未探測，已被自動填充，需要手動保存!"
    #define TC_ABL_SETTINGS           "Bilinear Bed Leveling"
    #define TC_ABL_SETTINGS_UBL       "Unified Bed Leveling"
    #define TC_ABL_SETTINGS_UBL_SAVE  "Save to slot"
    #define TC_ABL_SETTINGS_UBL_LOAD  "Load from slot"
    #define TC_ABL_SLOT0              "Slot 0"
    #define TC_ABL_SLOT1              "Slot 1"
    #define TC_ABL_SLOT2              "Slot 2"
    #define TC_ABL_SLOT3              "Slot 3"
    #define TC_ABL_SLOT_EEPROM        "Remember slot for next\nreboot? (Save EEPROM)"
    #define TC_ABL_Z                  "Z Fade"
    #define TC_ABL_ENABLE             "ABL:已開啟"
    #define TC_ABL_DISABLE            "ABL:已關閉"
    #define TC_BLTOUCH                "BLTouch "
    #define TC_BLTOUCH_TEST           "BLTouch檢測"
    #define TC_BLTOUCH_DEPLOY         "探針彈出"
    #define TC_BLTOUCH_STOW           "探針收回"
    #define TC_BLTOUCH_REPEAT         "精度測試"
    #define TC_Z_OFFSET               "Z軸偏移"
    #define TC_PROBE_OFFSET           "探針偏移"
    #define TC_CONFIRMATION           "Are you sure?"
    #define TC_DOWN                   "降低"
    #define TC_UP                     "抬升"
    #define TC_SAVE                   "儲存設定"
    #define TC_RESTORE                "恢復"
    #define TC_RESET                  "重設"
    #define TC_DEFAULT                "默認"
    #define TC_NEXT                   "下一個"
    #define TC_DISTANCE               "距離"
    #define TC_INVALID_VALUE          "沒有有效的條件!"
    #define TC_TIMEOUT_REACHED        "已超時!"
    #define TC_PROCESS_RUNNING        "正在運行,請稍後"
    #define TC_PROCESS_COMPLETED      "處理已完成!"
    #define TC_PROCESS_ABORTED        "處理已被中斷!"
    #define TC_INC                    "增加"
    #define TC_DEC                    "減少"
    #define TC_NOZZLE                 "噴頭"
    #define TC_BED                    "熱床"
    #define TC_CHAMBER                "機殼"
    #define TC_START                  "開始"
    #define TC_STOP                   "停止"
    #define TC_BACK                   "返回"
    #define TC_PAGE_UP                "上一頁"
    #define TC_PAGE_DOWN              "下一頁"
    #define TC_PAUSE                  "暫停"
    #define TC_RESUME                 "繼續"
    #define TC_LOAD                   "進料"
    #define TC_UNLOAD                 "退料"
    #define TC_SLOW_SPEED             "慢速"
    #define TC_NORMAL_SPEED           "常速"
    #define TC_FAST_SPEED             "快速"
    #define TC_FAN_FULL_SPEED         "全速"
    #define TC_FAN_HALF_SPEED         "半速"
    #define TC_ROTATE_UI              "顯示方向"
    #define TC_TOUCHSCREEN_ADJUST     "觸控校正"
    #define TC_MORE                   "更多"
    #define TC_SCREEN_INFO            "關於"
    #define TC_STATUS                 "狀態"
    #define TC_SIMULATOR_BG_COLOR     "Marlin模式背景顏色"
    #define TC_SIMULATOR_FONT_COLOR   "Marlin模式字體顏色"
    #define TC_WHITE                  "白"
    #define TC_BLACK                  "黑"
    #define TC_BLUE                   "藍"
    #define TC_RED                    "紅"
    #define TC_GREEN                  "綠"
    #define TC_CYAN                   "青"
    #define TC_YELLOW                 "黃"
    #define TC_BROWN                  "棕"
    #define TC_GRAY                   "灰"
    #define TC_ORANGE                 "橘"
    #define TC_INDIGO                 "靛藍"
    #define TC_VIOLET                 "藍紫"
    #define TC_MAGENTA                "桃紅"
    #define TC_PURPLE                 "紫"
    #define TC_LIME                   "萊姆"
    #define TC_DARKBLUE               "暗藍"
    #define TC_DARKGREEN              "暗綠"
    #define TC_DARKGRAY               "深灰"
    #define TC_DISCONNECT             "中斷連線"
    #define TC_BAUDRATE               "串列傳輸速率"
    #define TC_PERCENTAGE             "百分比"
    #define TC_BABYSTEP               "Z軸微調"
    #define TC_PERCENTAGE_SPEED       "速度百分比"
    #define TC_PERCENTAGE_FLOW        "流量百分比"
    #define TC_VALUE_ZERO             "歸零"
    #define TC_1_DEGREE               "1℃"
    #define TC_5_DEGREE               "5℃"
    #define TC_10_DEGREE              "10℃"
    #define TC_X_INC                  "X+"
    #define TC_Y_INC                  "Y+"
    #define TC_Z_INC                  "Z+"
    #define TC_X_DEC                  "X-"
    #define TC_Y_DEC                  "Y-"
    #define TC_Z_DEC                  "Z-"
    #define TC_X                      "X"
    #define TC_Y                      "Y"
    #define TC_Z                      "Z"
    #define TC_001_MM                 "0.01mm"
    #define TC_01_MM                  "0.1mm"
    #define TC_1_MM                   "1mm"
    #define TC_5_MM                   "5mm"
    #define TC_10_MM                  "10mm"
    #define TC_100_MM                 "100mm"
    #define TC_200_MM                 "200mm"
    #define TC_1_PERCENT              "1%"
    #define TC_5_PERCENT              "5%"
    #define TC_10_PERCENT             "10%"
    #define TC_PERCENT_VALUE          "%d%%"
    #define TC_READY                  "已準備好"
    #define TC_BUSY                   "系統繁忙請稍等"
    #define TC_UNCONNECTED            "尚未連線到主機板"
    #define TC_DISCONNECT_INFO        "電腦控制模式"
    #define TC_LOADING                "讀取中"
    #define TC_POWER_FAILED           "要繼續列印嗎？" //Question Sign
    #define TC_CONTINUE               "繼續"
    #define TC_CANCEL                 "取消" //Cancel Sign
    #define TC_ADJUST_TITLE           "觸控校正"
    #define TC_ADJUST_INFO            "點擊紅點"
    #define TC_ADJUST_OK              "校正成功"
    #define TC_ADJUST_FAILED          "校正失敗"
    #define TC_WARNING                "警告" //Exclamation Sign
    #define TC_STOP_PRINT             "要停止列印嗎？"
    #define TC_CONFIRM                "確定" //Confirm Sign
    #define TC_TFTSD                  "SD卡"
    #define TC_READ_TFTSD_ERROR       "SD卡讀取失敗"
    #define TC_TFTSD_INSERTED         "偵測到SD卡"
    #define TC_TFTSD_REMOVED          "SD卡已拔出"
    #define TC_U_DISK                 "隨身碟"
    #define TC_READ_U_DISK_ERROR      "隨身碟讀取失敗"
    #define TC_U_DISK_INSERTED        "偵測到隨身碟"
    #define TC_U_DISK_REMOVED         "隨身碟已拔出"
    #define TC_ONBOARDSD              "主機板插槽的SD卡"
    #define TC_READ_ONBOARDSD_ERROR   "主機板插槽的SD卡讀取失敗"
    #define TC_FILAMENT_SENSOR        "耗材感應器"
    #define TC_FILAMENT_RUNOUT        "沒偵測到耗材"
    #define TC_PREHEAT                "預熱"
    #define TC_PREHEAT_BOTH           "全部"
    #define TC_IS_PAUSE               "列印時無法擠出耗材，要暫停列印嗎？"
    #define TC_AUTO_SHUT_DOWN         "自動關機"
    #define TC_UNIFIEDMOVE            "運動"
    #define TC_UNIFIEDHEAT            "溫度"
    #define TC_COOLDOWN               "冷卻"
    #define TC_EMERGENCYSTOP          "立刻停止"
    #define TC_TOUCH_TO_EXIT          "觸控任意位置退出頁面"
    #define TC_MAINMENU               "選單"
    #define TC_WAIT_TEMP_SHUT_DOWN    "噴頭降溫中，直到%d ℃時自動關機" // The length of the info line is 24 characters, so the "temperatureof" will automatically be divided into "temperature of..."
    #define TC_FORCE_SHUT_DOWN        "強制關機"
    #define TC_SHUTTING_DOWN          "關機中"
    #define TC_PARAMETER_SETTING      "參數設定"
    #define TC_ON                     "開啟"
    #define TC_OFF                    "關閉"
    #define TC_SMART                  "自動"
    #define TC_TERMINAL_ACK           "在G-code終端顯示溫度"
    #define TC_INVERT_XAXIS           "X軸反向運轉"
    #define TC_INVERT_YAXIS           "Y軸反向運轉"
    #define TC_INVERT_ZAXIS           "Z軸反向運轉"
    #define TC_MOVE_SPEED             "移動速度(X Y Z)"
    #define TC_KNOB_LED               "旋鈕LED顏色"
    #define TC_KNOB_LED_IDLE          "旋鈕LED自動睡眠"
    #define TC_M0_PAUSE               "M0暫停"
    #define TC_SEND_START_GCODE       "執行起始G-code"
    #define TC_SEND_END_GCODE         "執行結尾G-code"
    #define TC_SEND_CANCEL_GCODE      "中斷執行G-code"
    #define TC_PERSISTENT_STATUS_INFO "頂部溫度訊息"
    #define TC_FILE_LISTMODE          "文件預覽列表模式"
    #define TC_CURRENT_SETTING        "驅動晶片電流設定 (mA)"
    #define TC_STEPS_SETTING          "電機每毫米步數Steps/mm"
    #define TC_MAXFEEDRATE            "最大移動速度"
    #define TC_MAXACCELERATION        "最大加速度"
    #define TC_ACCELERATION           "加速度"
    #define TC_PRINT_ACCELERATION     "列印加速度"
    #define TC_RETRACT_ACCELERATION   "回抽加速度"
    #define TC_TRAVEL_ACCELERATION    "空跑加速度"
    #define TC_BUMP_SENSITIVITY       "堵料檢測靈敏度"
    #define TC_FWRETRACT              "FW Retraction"
    #define TC_FWRECOVER              "FW Retraction Recover"
    #define TC_LIN_ADVANCE            "Linear Advance"
    #define TC_RESET_SETTINGS_INFO    "所有設定都會恢復預設值，確定嗎?"
    #define TC_RESET_SETTINGS_DONE    "重設成功，請重新開機"
    #define TC_INFO                   "提示" //Info Sign
    #define TC_LCD_BRIGHTNESS         "螢幕亮度"
    #define TC_LCD_BRIGHTNESS_DIM     "睡眠狀態螢幕亮度"
    #define TC_LCD_DIM_IDLE_TIMER     "螢幕進入睡眠時間"
    #define TC_5_SECONDS              "5秒."
    #define TC_10_SECONDS             "10秒."
    #define TC_30_SECONDS             "30秒."
    #define TC_60_SECONDS             "1分鐘"
    #define TC_120_SECONDS            "2分鐘"
    #define TC_300_SECONDS            "5分鐘"
    #define TC_CUSTOM_SECONDS         "自訂"
    #define TC_ST7920_FULLSCREEN      "全螢幕Marlin模式"
    #define TC_PLR_EN                 "断电续打"
    #define TC_SETTING_SAVE           "保存设置"
    #define TC_SETTING_RESET          "重置设置"
    #define TC_SETTING_RESTORE        "保存设置"
    #define TC_EEPROM_SAVE_INFO       "是否保存打印机设置到EEPROM?"
    #define TC_EEPROM_RESTORE_INFO    "是否从EEPROM加载设置?"
    #define TC_EEPROM_RESET_INFO      "重置EEPROM到出厂设置?"
    #define TC_RETRACT_FEEDRATE       "FW回抽速度"
    #define TC_RETRACT_LENGTH         "FW回抽长度"
    #define TC_RETRACT_SWAP_LENGTH    "换料时回抽的长度"
    #define TC_RETRACT_Z_LIFT         "回抽时Z轴抬升的高度"
    #define TC_RETRACT_AUTO           "FW自动回抽"
    #define TC_RECOVER_FEEDRATE       "FW挤出速度"
    #define TC_SWAP_RECOVER_FEEDRATE  "换料时挤出的速度"
    #define TC_RECOVER_LENGTH         "额外挤出的长度"
    #define TC_SWAP_RECOVER_LENGTH    "换料时额外挤出的长度"
    #define TC_START_PRINT            "是否开始打印:\n %s?"
    #define TC_ACK_NOTIFICATION       "ACK 弹窗类型"
    #define TC_LEVELING_EDGE_DISTANCE "手动调平边沿距离"
    #define TC_XY_UNLOCK              "解锁XY"
    #define TC_TUNING                 "调整"
    #define TC_PID                    "PID"
    #define TC_PID_TITLE              "PID自动整定"
    #define TC_PID_START_INFO         "开始PID自动整定,需要几分钟来完成,是否继续?"
    #define TC_PID_START_INFO_2       "PID 正在自动整定中!"
    #define TC_PID_START_INFO_3       "不要操作触控屏直到整定完成!"
    #define TC_TUNE_EXTRUDER          "Tune steps"
    #define TC_TUNE_EXT_EXTRUDE_100   "挤出100mm"
    #define TC_TUNE_EXT_TEMP          "Extruder tuning | Heat"
    #define TC_TUNE_EXT_TEMPLOW       "Desired temperature too low!\nMinimum temperature: %d C"
    #define TC_TUNE_EXT_DESIREDVAL    "Temperature is not yet at the desired value"
    #define TC_TUNE_EXT_MARK120MM     "Mark 120 mm on your fillament\nPress '%s' when ready\nMeasure remaining length\nafter extruding"
    #define TC_TUNE_EXT_HEATOFF       "Turn the heater off?"
    #define TC_TUNE_EXT_ADJ_ESTEPS    "Adjust E-Steps"
    #define TC_TUNE_EXT_ESTEPS_SAVED  "New E-steps saved!\nDon't forget to\nsave it in EEPROM\nNew value: %0.2f"
    #define TC_TUNE_EXT_MEASURED      "Length remaining:"
    #define TC_TUNE_EXT_OLD_ESTEP     "Old e-steps: %0.2f"
    #define TC_TUNE_EXT_NEW_ESTEP     "New e-steps: %0.2f"
    #define TC_CONNECTION_SETTINGS    "连接"

#endif
