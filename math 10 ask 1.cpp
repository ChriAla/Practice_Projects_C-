#include <iostream>
using namespace std;

#define SIZE 100

class video{
		string artist_name;
		string track_name;
		int duration;
	public:
		int get_duration()const;
		void set_video(string in_artist_name,string in_track_name,int in_duration);
		friend ostream &operator<<(ostream &left, video &right);
};
class playlist{
	protected:
		string name;
		string describe;
		int duration;
		video videos[SIZE];
		int videos_size;
	public:
		playlist(string in_name,string in_describe);
		void add_video(video in_video);
		friend ostream &operator<<(ostream &left, playlist &right);
};
class classical_playlist:public playlist{
		string period;
	public:
		classical_playlist(string in_name,string in_describe,string in_period);
		friend ostream &operator<<(ostream &left, classical_playlist &right);
};

int main()
{	
	classical_playlist l("myuyuyu","pooooooo","lklklkllkk");
	playlist p("mixtape","looool");
	video temp;
	temp.set_video("llklklklkl","loloololol",60);
	l.add_video(temp);
	cout<<l;
	return 0;
}

int video::get_duration()const
{
	return duration;
}
void video::set_video(string in_artist_name,string in_track_name,int in_duration)
{
	artist_name=in_artist_name;
	track_name=in_track_name;
	duration=in_duration;
}
ostream &operator<<(ostream &left, video &right)
{
	left<<"("<<right.artist_name<<","<<right.track_name<<","<<right.duration<<")";
	return left;
}
playlist::playlist(string in_name,string in_describe)
{
	name=in_name;
	describe=in_describe;
	duration=0;
	videos_size=0;
}
void playlist::add_video(video in_video)
{
	videos[SIZE]=in_video;
	videos_size++;	
	duration+=in_video.get_duration();
}
ostream &operator<<(ostream &left, playlist &right)
{
	left<<"["<<right.name<<","<<right.describe<<","<<right.duration;
	
	for(int i=0; i<right.videos_size; i++)
		left<<right.videos[i]<<endl;
	left<<"]";
	return left;
}
classical_playlist::classical_playlist(string in_name,string in_describe,string in_period):
	playlist(in_name,in_describe)
{
	period=in_period;	
}
ostream &operator<<(ostream &left, classical_playlist &right)
{
	left<<"["<<right.name<<","<<right.describe<<","<<right.period<<","<<right.duration;
	
	for(int i=0; i<right.videos_size; i++)
		left<<right.videos[i]<<endl;
	left<<"]";
	return left;
}
