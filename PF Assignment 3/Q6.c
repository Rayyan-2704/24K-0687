#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    float temperature;
    float rainfall;
    float windPatterns;
} WeatherForecast;

typedef struct
{
    char cropType[50];
    char growthStage[50];
    int expectedYield;
    WeatherForecast *weather;
} Crop;

typedef struct
{
    float soilNutrients;
    float phLevel;
    int pestActivity; // 0 for none, 1 for pest activity detected
} Sensor;

typedef struct
{
    char equipmentName[50];
    int operationalStatus; // 0 for not operational, 1 for operational
    float fuelLevel;
    char activitySchedule[100];
} Equipment;

typedef struct
{
    float GPS_latitude;
    float GPS_longitude;
    float soilHealth;
    float moistureLevel;
    Crop *crops;
    int crop_count;
    Equipment *equipments;
    int equipment_count;
    Sensor *sensors;
    int sensor_count;
} Field;

typedef struct
{
    Field *fields;
    int field_count;
    float agg_yield_prediction;
    float resource_distribution;
    char emergency_plan[100];
} RegionalHub;

typedef struct
{
    RegionalHub *regional_hubs;
    int regional_hub_count;
} CentralAnalyticsServer;

Crop initialize_crop(const char *type, const char *stage, int yield, WeatherForecast *weather)
{
    Crop crop;
    strcpy(crop.cropType, type);
    strcpy(crop.growthStage, stage);
    crop.expectedYield = yield;
    crop.weather = weather;
    return crop;
}

Equipment initialize_equipment(const char *name, int status, int fuel, const char *schedule)
{
    Equipment equipment;
    strcpy(equipment.equipmentName, name);
    equipment.operationalStatus = status;
    equipment.fuelLevel = fuel;
    strcpy(equipment.activitySchedule, schedule);
    return equipment;
}

Sensor initialize_sensor(float nutrients, float ph, int pests)
{
    Sensor sensor;
    sensor.soilNutrients = nutrients;
    sensor.phLevel = ph;
    sensor.pestActivity = pests;
    return sensor;
}

Field initialize_field(float lat, float longit, float soil_health, float moisture, Crop *crops, int crop_count, Equipment *equipments, int equipment_count, Sensor *sensors, int sensor_count)
{
    Field field;
    field.GPS_latitude = lat;
    field.GPS_longitude = longit;
    field.soilHealth = soil_health;
    field.moistureLevel = moisture;
    field.crops = crops;
    field.crop_count = crop_count;
    field.equipments = equipments;
    field.equipment_count = equipment_count;
    field.sensors = sensors;
    field.sensor_count = sensor_count;
    return field;
}

RegionalHub initialize_reghub(Field *fields, int field_count, float yield, float resources, const char *emer_plan)
{
    RegionalHub reghub;
    reghub.fields = fields;
    reghub.field_count = field_count;
    reghub.agg_yield_prediction = yield;
    reghub.resource_distribution = resources;
    strcpy(reghub.emergency_plan, emer_plan);
    return reghub;
}

int main()
{
    // Data and initialization for weather
    WeatherForecast weather = {31.5, 20.5, 11.4};

    // Data and initialization (via function) for crops array
    Crop crops[2] = {
        initialize_crop("Wheat", "Irrigating", "1500", &weather),
        initialize_crop("Rice", "Germinating", "1500", &weather)};

    // Data and initialization (via function) for equipments array
    Equipment equipments[2] = {
        initialize_equipment("Tractor", 1, 190.50, "9am-1pm"),
        initialize_equipment("Sprinklers", 1, 75.00, "8am-10am")};

    // Data and initialization (via function) for sensors array
    Sensor sensors[2] = {
        initialize_sensor(20.5, 7.0, 1),
        initialize_sensor(25.0, 6.5, 0)};

    // Data and initialization (via function) for fields array
    Field fields[1] = {
        initialize_field(153.25, 270.10, 55.10, 45.0, crops, 2, equipments, 2, sensors, 2)};

    // Data and initialization (via function) for regional hubs array
    RegionalHub regional_hub[1] = {
        initialize_reghub(fields, 1, 15000.75, 1200, "Plan B")};

    // Data and initialization for the central server
    CentralAnalyticsServer server = {regional_hub, 1};

    return 0;
}