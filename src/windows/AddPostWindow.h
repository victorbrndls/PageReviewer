/*
 * AddPostWindow.h
 *
 *  Created on: Sep 1, 2018
 *      Author: Harystolho
 */

#ifndef WINDOWS_ADDPOSTWINDOW_H_
#define WINDOWS_ADDPOSTWINDOW_H_

#include "../PageFrame.h"
#include "wx/frame.h"
#include "wx/panel.h"
#include "wx/button.h"
#include "wx/textctrl.h"
#include "wx/datectrl.h"
#include "wx/stattext.h"

class AddPostWindow : public wxFrame{
public:
	AddPostWindow(wxWindow* parent);
	virtual ~AddPostWindow();
private:

	wxTextCtrl* title;
	wxTextCtrl* link;
	wxDatePickerCtrl* date;
	wxTextCtrl* text;
	wxButton* add;

	void createObjects();

	PageFrame* pageFrame;
	wxPanel* panel;
};

#endif /* WINDOWS_ADDPOSTWINDOW_H_ */
