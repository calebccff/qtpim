/****************************************************************************
**
** Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the Qt Mobility Components.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QORGANIZERCOLLECTIONENGINEID_H
#define QORGANIZERCOLLECTIONENGINEID_H

#include <qorganizerglobal.h>

#include <QtCore/qshareddata.h>

QTORGANIZER_BEGIN_NAMESPACE

class Q_ORGANIZER_EXPORT QOrganizerCollectionEngineId : public QSharedData
{
public:
    virtual ~QOrganizerCollectionEngineId();

    virtual bool isEqualTo(const QOrganizerCollectionEngineId *other) const = 0;
    virtual bool isLessThan(const QOrganizerCollectionEngineId *other) const = 0;

    virtual QString managerUri() const = 0;
    virtual QOrganizerCollectionEngineId *clone() const = 0;

    virtual QString toString() const = 0;

#ifndef QT_NO_DEBUG_STREAM
    // NOTE: on platforms where Qt is built without debug streams enabled, vtable will differ!
    virtual QDebug &debugStreamOut(QDebug &dbg) const = 0;
#endif // QT_NO_DEBUG_STREAM

    virtual uint hash() const = 0;
};

QTORGANIZER_END_NAMESPACE

QT_BEGIN_NAMESPACE
Q_DECLARE_TYPEINFO(QTORGANIZER_PREPEND_NAMESPACE(QOrganizerCollectionEngineId), Q_MOVABLE_TYPE);
QT_END_NAMESPACE

#endif // QORGANIZERCOLLECTIONENGINEID_H
