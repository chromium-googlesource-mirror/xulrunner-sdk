/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* ***** BEGIN LICENSE BLOCK *****
 * Version: MPL 1.1/GPL 2.0/LGPL 2.1
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License"); you may not use this file except in compliance with
 * the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * The Original Code is mozilla.org code.
 *
 * The Initial Developer of the Original Code is
 * Netscape Communications Corporation.
 * Portions created by the Initial Developer are Copyright (C) 1998
 * the Initial Developer. All Rights Reserved.
 *
 * Contributor(s):
 *
 * Alternatively, the contents of this file may be used under the terms of
 * either the GNU General Public License Version 2 or later (the "GPL"), or
 * the GNU Lesser General Public License Version 2.1 or later (the "LGPL"),
 * in which case the provisions of the GPL or the LGPL are applicable instead
 * of those above. If you wish to allow use of your version of this file only
 * under the terms of either the GPL or the LGPL, and not to allow others to
 * use your version of this file under the terms of the MPL, indicate your
 * decision by deleting the provisions above and replace them with the notice
 * and other provisions required by the GPL or the LGPL. If you do not delete
 * the provisions above, a recipient may use your version of this file under
 * the terms of any one of the MPL, the GPL or the LGPL.
 *
 * ***** END LICENSE BLOCK ***** */

#ifndef nsIEventListener_h__
#define nsIEventListener_h__

#include "nsISupports.h"

class nsGUIEvent;

/**
 * Event listener interface.
 * Alternative to a callback for recieving events.
 */

// {c83f6b80-d7ce-11d2-8360-c4c894c4917c}
#define NS_IEVENTLISTENER_IID \
{ 0xc83f6b80, 0xd7ce, 0x11d2, { 0x83, 0x60, 0xc4, 0xc8, 0x94, 0xc4, 0x91, 0x7c } }

class nsIEventListener : public nsISupports {
public:
  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IEVENTLISTENER_IID)
  
 /**
  * Processes all events. 
  * If a mouse listener is registered this method will not process mouse events. 
  * @param anEvent the event to process. See nsGUIEvent.h for event types.
  */

  virtual nsEventStatus ProcessEvent(const nsGUIEvent & anEvent) = 0;

};

NS_DEFINE_STATIC_IID_ACCESSOR(nsIEventListener, NS_IEVENTLISTENER_IID)

#endif // nsIEventListener_h__
