#pragma once

#include <QString>

namespace gui
{
	namespace stylesheets
	{
		const QString default_style_sheet
		(
			// main window toolbar search
			"QLineEdit#mw_searchbar { padding: 0 1em; background: #101f35; selection-background-color: #168bff; margin: .8em; color: #e6f2ff; }"

			// main window toolbar slider
			"QSlider#sizeSlider { color: #cfe7ff; background: #12213a; }"
			"QSlider#sizeSlider::handle:horizontal { border: 0em smooth rgba(41, 75, 114, 255); border-radius: .58em; background: #53d8ff; width: 1.2em; margin: -.5em 0; }"
			"QSlider#sizeSlider::groove:horizontal { border-radius: .15em; background: #294b72; height: .3em; }"

			// main window toolbar
			"QToolBar#mw_toolbar { background-color: #12213a; border: none; }"
			"QToolBar#mw_toolbar::separator { background-color: rgba(65, 103, 148, 235); width: 0.125em; margin-top: 0.250em; margin-bottom: 0.250em; }"
			"QToolButton:disabled { color: #7892b1; }"

			// main window toolbar icon color
			"QLabel#toolbar_icon_color { color: #cfe7ff; }"

			// game list icon color
			"QLabel#gamelist_icon_background_color { color: rgba(18, 33, 58, 255); }"

			// game grid
			"#game_list_grid #flow_widget_content { background: #0b1424; }"
			"#game_list_grid_item { background: #0b1424; }"
			"#game_list_grid_item[selected=\"true\"] { background: #0878d1; }"
			"#game_list_grid_item:focus { background: #0878d1; }"
			"#game_list_grid_item:hover { background: #214a78; }"
			"#game_list_grid_item:hover:focus { background: #168bff; }"
			"#game_list_grid_item #game_list_grid_item_title_label { color: rgba(207, 231, 255, 255); font-weight: 600; font-size: 8pt; font-family: Lucida Grande; border: 0em solid #294b72; }"

			// game grid hover and focus: we need to handle properties differently when using descendants
			"#game_list_grid_item[selected=\"true\"] #game_list_grid_item_title_label { color: #ffffff; }"
			"#game_list_grid_item[hover=\"true\"] #game_list_grid_item_title_label { color: #ffffff; }"
			"#game_list_grid_item[focus=\"true\"] #game_list_grid_item_title_label { color: #ffffff; }"

			// screenshot manager
			"#screenshot_flow_widget #flow_widget_content { background: transparent; }"
			"#screenshot_item { background: transparent; }"
			"#screenshot_item[selected=\"true\"] { background: #0878d1; }"
			"#screenshot_item:focus { background: #0878d1; }"
			"#screenshot_item:hover { background: #214a78; }"
			"#screenshot_item:hover:focus { background: #168bff; }"

			// save manager icon color
			"QLabel#save_manager_icon_background_color { color: rgba(18, 33, 58, 255); }"

			// trophy manager icon color
			"QLabel#trophy_manager_icon_background_color { color: rgba(18, 33, 58, 255); }"

			// tables
			"QTableWidget { alternate-background-color: #162944; background-color: #101f35; border: none; }"
			"QTableView::item { border-left: 0.063em solid #203c5c; border-right: 0.063em solid #203c5c; padding-left:0.313em; }"
			"QTableView::item:selected { background-color: #0878d1; color: #ffffff; }"

			// table headers
			"QHeaderView::section { background: #172d4a; color: #e6f2ff; padding-left: .5em; padding-right: .5em; padding-top: .4em; padding-bottom: -.1em; border: 0.063em solid #203c5c; }"
			"QHeaderView::section:hover { background: #214a78; color: #ffffff; padding-left: .5em; padding-right: .5em; padding-top: .4em; padding-bottom: -.1em; border: 0.063em solid #294b72; }"

			// dock widget
			"QDockWidget{ background: transparent; color: #e6f2ff; }"
			"[floating=\"true\"]{ background: #0b1424; }"
			"QDockWidget::title{ background: #172d4a; border: none; padding-top: 0.2em; padding-left: 0.2em; }"
			"QDockWidget::close-button, QDockWidget::float-button{ background-color: #172d4a; }"

			// log frame tty
			"QPlainTextEdit#tty_frame { background-color: #0b1424; color: #d5e8ff; }"
			"QLabel#tty_text { color: #d5e8ff; }"

			// log frame log
			"QPlainTextEdit#log_frame { background-color: #0b1424; color: #d5e8ff; }"
			"QLabel#log_level_always { color: #107896; }"
			"QLabel#log_level_fatal { color: #ff00ff; }"
			"QLabel#log_level_error { color: #C02F1D; }"
			"QLabel#log_level_todo { color: #ff6000; }"
			"QLabel#log_level_success { color: #008000; }"
			"QLabel#log_level_warning { color: #BA8745; }"
			"QLabel#log_level_notice { color: #d5e8ff; }"
			"QLabel#log_level_trace { color: #89a9cc; }"
			"QLabel#log_stack { color: #d5e8ff; }"

			// about dialog
			"QWidget#header_section { background-color: #12213a; }"

			// kernel explorer
			"QDialog#kernel_explorer { background-color: rgba(11, 20, 36, 255); }"

			// memory viewer
			"QDialog#memory_viewer { background-color: rgba(11, 20, 36, 255); }"
			"QLabel#memory_viewer_address_panel { color: rgba(83, 216, 255, 255); background-color: rgba(11, 20, 36, 255); }"
			"QLabel#memory_viewer_hex_panel { color: #d5e8ff; background-color: rgba(11, 20, 36, 255); }"
			"QLabel#memory_viewer_ascii_panel { color: #d5e8ff; background-color: rgba(11, 20, 36, 255); }"

			// debugger frame
			"QLabel#debugger_frame_breakpoint { color: #08213b; background-color: #8edcff; }"
			"QLabel#debugger_frame_pc { color: #08213b; background-color: #53d8ff; }"

			// rsx debugger
			"QLabel#rsx_debugger_display_buffer { background-color: rgba(11, 20, 36, 255); }"

			// pad settings
			"QLabel#l_controller { color: #cfe7ff; }"

			// Top menu bar (Workaround for transparent menus in Qt 6.7.3)
			"QMenu { color: #e6f2ff; background-color: #12213a; alternate-background-color: #162944; }"
			"QMenu::item:selected { color: #ffffff; background: #0878d1; }"
			"QMenu::item:disabled { color: #7892b1; }"
		);
	}
}
