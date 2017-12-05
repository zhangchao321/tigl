/* 
* Copyright (C) 2016 Airbus Defence and Space
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#include "CCPACSWingSparPosition.h"

#include "CCPACSWingCSStructure.h"
#include "CCPACSWingSpars.h"
#include "CTiglError.h"


namespace tigl
{

CCPACSWingSparPosition::CCPACSWingSparPosition(CCPACSWingSparPositions* sparPositions, CTiglUIDManager* uidMgr)
: generated::CPACSSparPosition(sparPositions, uidMgr) {}


const std::string& CCPACSWingSparPosition::GetElementUID() const
{
    return GetSparPoint().GetReferenceUID();
}

void CCPACSWingSparPosition::SetElementUID(const std::string& uid)
{
    GetSparPoint().SetReferenceUID(uid);

    // invalidate whole component segment structure, since ribs or cells could reference the spar
    GetParent()->GetParent()->GetParent()->Invalidate();
}

double CCPACSWingSparPosition::GetEta() const
{
    return GetSparPoint().GetEta();
}

void CCPACSWingSparPosition::SetEta(double value)
{
    GetSparPoint().SetEta(value);

    // invalidate whole component segment structure, since ribs or cells could reference the spar
    GetParent()->GetParent()->GetParent()->Invalidate();
}

} // end namespace tigl
