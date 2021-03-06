#ifndef FVPANELGUI_H
#define FVPANELGUI_H

#include <QWidget>
#include <QPushButton>
#include "FiberDisplay.h"

class FVPanelGUI: public QWidget
{
	Q_OBJECT
	
	public:
		enum ExitSignal{Undo,Ok};
		FVPanelGUI(QWidget* Parent, FiberDisplay* FVDisplay);
		
	signals:
		void Exit(FVPanelGUI::ExitSignal Type);
		void Progress(int);
	
	protected:
		FiberDisplay* m_Display;
		QPushButton* m_PB_Undo;
		QPushButton* m_PB_Next;
};

#endif
