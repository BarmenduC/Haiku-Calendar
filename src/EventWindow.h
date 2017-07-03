/*
 * Copyight 2017 Akshay Agarwal, agarwal.akshay.akshay8@gmail.com
 * All rights reserved. Distributed under the terms of the MIT License.
 */
#ifndef EVENTWINDOW_H
#define EVENTWINDOW_H

#include <Button.h>
#include <CheckBox.h>
#include <Menu.h>
#include <MenuField.h>
#include <PopUpMenu.h>
#include <RadioButton.h>
#include <StringView.h>
#include <TextControl.h>
#include <View.h>
#include <Window.h>


const uint32 kEventWindowQuitting = 'kewq';


class EventWindow: public BWindow {
public:
			EventWindow();
	virtual void	MessageReceived(BMessage* message);
	virtual bool	QuitRequested();

private:
	static const uint32	kDeletePressed	= 1000;
	static const uint32	kCancelPressed	= 1001;
	static const uint32	kSavePressed	= 1002;
	static const uint32	kAllDayPressed	= 1003;
	static const uint32	kOptEveryMonth	= 1004;
	static const uint32	kOptEveryYear	= 1005;

	BTextControl*		fTextName;
	BTextControl*		fTextPlace;

	BTextView*		fTextDescription;
	BView*			fMainView;

	BMenu*			fCategoryMenu;
	BMenu*			fStartDateEdit;
	BMenu*			fEndDateEdit;

	BMenuField*		fCategoryMenuField;
	BMenuField*		fStartDateField;
	BMenuField*		fEndDateField;

	BStringView*		fNameLabel;
	BStringView*		fPlaceLabel;
	BStringView*		fDescriptionLabel;
	BStringView*		fCategoryLabel;
	BStringView*		fAllDayLabel;
	BStringView*		fStartLabel;
	BStringView*		fEndLabel;
	BStringView*		fRecurrenceLabel;

	BButton*		fDeleteButton;
	BRadioButton*		fEveryMonth;
	BRadioButton*		fEveryYear;
	BCheckBox*		fAllDayCheckBox;

};

#endif