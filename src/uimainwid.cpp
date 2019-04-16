#include "uimainwid.h"

#include <qvariant.h>
#include "dsowid.h"
#include "buttongrid.h"
/*
 *  Constructs a UIMainWid as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 */
UIMainWid::UIMainWid(QWidget* parent, const char* name, Qt::WindowFlags fl)
    : QWidget(parent, name, fl)
{
    setupUi(this);

}

/*
 *  Destroys the object and frees any allocated resources
 */
UIMainWid::~UIMainWid()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void UIMainWid::languageChange()
{
    retranslateUi(this);
}

