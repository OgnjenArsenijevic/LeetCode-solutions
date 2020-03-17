/*
1294. Weather Type in Each Country
Author: Ognjen Arsenijevic
username: ognjen1998
*/
select country_name,
      case when avg(weather_state) <= 15 then 'Cold' 
      when avg(weather_state) >= 25 then 'Hot'
      else 'Warm' end weather_type
from weather left join countries using (country_id)
where month(weather.day) = 11
group by country_name;
