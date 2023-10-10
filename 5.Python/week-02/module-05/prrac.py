
import pandas as pd
import numpy as np
import itertools as it
flight_schedule0 = [['T1','HOU', 'AUS', 360, 405],
                   ['T2', 'AUS', 'HOU', 360, 405],
                   ['T3', 'HOU', 'DAL', 360, 425],
                   ['T4', 'HOU', 'DAL', 360, 425],
                   ['T5', 'DAL', 'HOU', 360, 425],
                   ['T6', 'DAL', 'HOU', 360, 425]]

#Defining a function to convert minutes after midnight to military time
def mid_to_mil(t):
    x = int(t)
    mil_time_conv = str(int(t/60)).zfill(2) + str(int(t%60)).zfill(2)
    return(mil_time_conv)

#Converting the list of lists to a list
merged = list(it.chain.from_iterable(flight_schedule0))

#Creating a list for flight times
flight_times = [ ['AUSDAL', 50], ['DALAUS' , 50], ['HOUDAL' , 65], ['DALHOU', 65], ['AUSHOU', 45], ['HOUAUS', 45] ]
flight_time = [flight_times[5][1],flight_times[4][1],flight_times[2][1],flight_times[2][1],flight_times[3][1],flight_times[3][1],]

#Iterating the loop till atleast one tail departs and arrives before 2200(that is 1320 mins after midnight) 
temp_list1 = []
c = 0
while c < 1320:
    flight_schedule0
    for b in range(0,6):
#Creating a list for ground times at respective cities and calculating the next immediate schedule
        upt_dpt_lst = []
        for a in range (0,6):
            if flight_schedule0[a][2] == 'AUS':
                departure_at_city2 = int(flight_schedule0[a][4])+25
            elif (flight_schedule0[a][2] == 'DAL'):
                departure_at_city2 = int(flight_schedule0[a][4])+30
            elif (flight_schedule0[a][2] == 'HOU'):
                departure_at_city2 = int(flight_schedule0[a][4])+35
            upt_dpt_lst.append(departure_at_city2)
        new_schedule = flight_schedule0
        new_schedule.append([(str(flight_schedule0[b][0])),(flight_schedule0[b][2]),(flight_schedule0[b][1]),(upt_dpt_lst[b]),(upt_dpt_lst[b]+flight_time[b])])
        temp_list = list([(str(flight_schedule0[b][0])),(flight_schedule0[b][2]),(flight_schedule0[b][1]),(upt_dpt_lst[b]),(upt_dpt_lst[b]+flight_time[b])]) 
        temp_list1=temp_list1+temp_list
        c = flight_schedule0[b][4]
        
#Updating the input to the loop to perform next iteration
    flight_schedule0 = new_schedule[-6:]
temp_list2 = merged+temp_list1

#Converting the list into dataframe using pandas
df = pd.DataFrame((np.array(temp_list2)).reshape(72,5),columns = ['tail_number','origin','destination','departure_time','arrival_time'])

#Converting the arrivel_time and departure_time columns into integers and applying the function to convert minutes from midnight to military time
df_arr = df['arrival_time'].apply(int)
df['arrival_time'] = df_arr.apply(mid_to_mil)
df_dep = df['departure_time'].apply(int)
df['departure_time'] = df_dep.apply(mid_to_mil)
df['arrival_time'] = df['arrival_time'].apply(int)

#filtering out the flights that fly or reach after 2200 and writing the dataframe to csv file
df = df.sort_values(['tail_number','departure_time'],ascending=[True,True])
df_filtered = df[df['arrival_time'] < 2200]
df_filtered_a = df_filtered
df_filtered_a.is_copy = False
df_filtered_a['arrival_time'] = df_filtered_a['arrival_time'].astype(str).str.zfill(4)
df_filtered_a.to_csv('flight_schedule.csv', index = False)
 