To convert .csv to .json using a utility pgm that will be called at 12.am .


class Read_System_Time
{
int system_time;
Read system time(from controller) assign it to system_time
int read_system_time_utility_run()
{
if(system_time == 12.a.m)
{
set utility_run as set
return utility_run;
}
}
};

class Read_CSV
{
int device_id;
chasr device_name[];
char device_location[];

int read_csv_header_data(int utility_run)
{
check if utility_run == set
{
open .csv file for read
check if NULL()
{
}
else
{
start reading header till delimiter and assign it to device_id[0],device_name[0],device_location[0]
start reading valid data (each line) and assign it to device_id[] ,device_name[],device_location[]
if any invalid character ,output to "error.txt" with row information added
return a success flag once read is done
}
}
};



class csv_to_json_conv :public Read_CSV
{
void csv_to_json_converter()
{
open .json file for write
check if (null)
{
}
else
{
Add [ intially
Each .json object should appear in {} ,Number of json objects = (Number of valid data lines in csv -1)
write obtained data device_id[] ,device_name[],devica_location[] in to json file in required format
add]
}
};


main{
Read_Systm_Time System_Time;
Read_CSV CSV_Header_Data;
csv_to_json_conv csv_json_converter;
call(System_Time.read_system_time_utility_run) in every 10ms
check the return value utility_run ,if set call(CSV_Header_Data.read_csv_header_data(utility_run))
call(csv_json_converter.csv_to_json_converter()) if success flag is set

}



