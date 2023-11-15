class LockedDoorsConfig
{
    ref map<string, ref array<ref DoorInfo>> m_DoorConfig;

    static void Save(ref LockedDoorsConfig config, string path)
    {
        JsonFileLoader<LockedDoorsConfig>.JsonSaveFile(path, config);
    }

    static void Load(string path, out ref LockedDoorsConfig config)
    {
        JsonFileLoader<LockedDoorsConfig>.JsonLoadFile(path, config);
    }

    void LockedDoorsConfig()
    {
        m_DoorConfig = new map<string, ref array<ref DoorInfo>>;
        m_DoorConfig.Insert("doors", new array<ref DoorInfo>);
        m_DoorConfig.Get("doors").Insert(new DoorInfo(0, "0 0 0", "classname", "keyClassname")); //dontobf
    }

    void PrintContent()
    {
        Print("LockedDoorsConfig: " + m_DoorConfig.Count());
    }

    void AddDoorsToBuilding(ref DoorInfo info)
    {
        if(!m_DoorConfig.Contains(info.BuildingClassname))
            m_DoorConfig.Insert(info.BuildingClassname, new array<ref DoorInfo>);
        m_DoorConfig.Get(info.BuildingClassname).Insert(info);
    }

    bool TryGetDoorInfo(string className, out ref array<ref DoorInfo> doorInfo)
    {
        autoptr array<ref DoorInfo> doors = m_DoorConfig.Get(className);
        if(doors)
        {
            doorInfo = doors;
            return true;
        }

        return false;
    }
};

class DoorInfo
{
    int DoorIndex;
    vector BuildingPosition;
    string BuildingClassname;
    ref TStringArray KeyClassnames;
    ref map<string, string> Data;

    void DoorInfo(int index, vector position, string name, string keyClass)
    {
        DoorIndex = index;
        BuildingPosition = position;
        BuildingClassname = name;
        
        KeyClassnames = new TStringArray;
        KeyClassnames.Insert(keyClass);

        Data = new map<string, string>;
        Data.Insert("unlockTime", "10");
        Data.Insert("actionText", "Unlock with key");
        Data.Insert("sendNotificationToClient", "0");
        Data.Insert("sendNotificationToAll", "0");
        Data.Insert("notificationHeader", "ALERT");
        Data.Insert("notificationText", "Door unlocked");
        Data.Insert("notificationIcon", "set:ccgui_enforce image:MapUserMarker");
        Data.Insert("isAlarmed", "1");
        Data.Insert("alarmSound", "CRDTN_Core_SoundSet_Sound_Alarm");
    }

    void SetKeys(ref array<string> keys)
    {
        KeyClassnames.Clear();
        foreach (string key : keys)
        {
            KeyClassnames.Insert(key);
        }
    }

    int GetUnlockTime()
    {
        string time;
        if(Data.Find("unlockTime", time))
        {
            return time.ToInt();
        }
        return 0;
    }

    string GetActionText()
    {
        string text;
        if(Data.Find("actionText", text))
        {
            return text;
        }
        return "";
    }

    bool SendNotificationToClient()
    {
        string value;
        if(Data.Find("sendNotificationToClient", value))
        {
            if(value == "1")
                return true;
        }
        return false;
    }

    bool SendNotificationToAll()
    {
        string value;
        if(Data.Find("sendNotificationToAll", value))
        {
            if(value == "1")
                return true;
        }
        return false;
    }

    string GetNotificationHeader()
    {
        string header;
        if(Data.Find("notificationHeader", header))
        {
            return header;
        }
        return "";
    }

    string GetNotificationText()
    {
        string text;
        if(Data.Find("notificationText", text))
        {
            return text;
        }
        return "";
    }

    string GetNotificationIcon()
    {
        string icon;
        if(Data.Find("notificationIcon", icon))
        {
            return icon;
        }
        return "";
    }

    string GetEventId()
    {
        string id;
        if(Data.Find("eventId", id))
        {
            return id;
        }
        return "";
    }

    bool IsRequiredKey(string keyType)
    {
        return KeyClassnames.Find(keyType) != -1;
    }

    bool IsAlarmed()
    {
        string value;
        if(Data.Find("isAlarmed", value))
        {
            if(value == "1")
                return true;
        }
        return false;
    }

    string GetAlarmSound()
    {
        string sound;
        if(Data.Find("alarmSound", sound))
        {
            return sound;
        }
        return "";
    }

    void PrintInfo()
    {
        // Print("DoorInfo: ");
        // Print(DoorIndex);
        // Print(BuildingPosition);
        // Print(BuildingClassname);
        // foreach (string key : KeyClassnames)
        // {
        //     Print(key);
        // }
        // Print("UnlockTime: " + GetUnlockTime());
        // Print("ActionText: " + GetActionText());
        return;
    }

};
