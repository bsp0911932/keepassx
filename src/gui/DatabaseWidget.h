/*
 *  Copyright (C) 2010 Felix Geyer <debfx@fobos.de>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 2 or (at your option)
 *  version 3 of the License.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef KEEPASSX_DATABASEWIDGET_H
#define KEEPASSX_DATABASEWIDGET_H

#include <QtGui/QStackedWidget>

class Database;
class EditEntryWidget;
class Entry;
class EntryView;
class GroupView;

class DatabaseWidget : public QStackedWidget
{
    Q_OBJECT

public:
    explicit DatabaseWidget(Database* db, QWidget* parent = 0);

private Q_SLOTS:
    void switchToView();
    void switchToEdit(Entry* entry);

private:
    QWidget* m_mainWidget;
    EditEntryWidget* m_editWidget;
    GroupView* m_groupView;
    EntryView* m_entryView;
};

#endif // KEEPASSX_DATABASEWIDGET_H
