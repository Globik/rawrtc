#include <sys/eventfd.h>
#include <sys/types.h>
#include <errno.h>
#include <unistd.h>
#include <pthread.h>
#include <rawrtc.h>
#include <kore/kore.h>
#include <kore/http.h>
#include <kore/tasks.h>
#include "helper/utils.h"
#include "helper/handler.h"
#define DEBUG_MODULE "peer-connection-app"
#define DEBUG_LEVEL 7
#include <re_dbg.h>
pthread_mutex_t mutex;
pthread_mutexattr_t mutex_attribute;
pthread_t thread_id;
struct mif;
typedef void (*cb)(int);
struct mif{cb cb;};
void hani(void);
void signal_handler(int);
struct mif*mi=NULL;
int		page(struct http_request *);
void pipe_data_available(struct kore_task*);
int pipe_reader(struct kore_task*);
//void* pipe_reader(void*);
int init(int);
volatile int ab=1;
void parse_was(int,void*arg);
int evfd;
uint64_t u;
void dusi(int);
void dusi(int a){
kore_log(LOG_INFO,"ON DUSI %d",a);	
int err;
err=pthread_mutex_lock(&mutex);
if(err){kore_log(LOG_INFO,"no mutex lock");}
re_thread_enter();
re_cancel();
re_thread_leave();
err=pthread_mutex_unlock(&mutex);
if(err){kore_log(LOG_INFO,"no mutex unlock");}
}
int
page(struct http_request *req)
{
	//ssize_t slen;
	//u=1;
	//slen=write(evfd,&u,sizeof(uint64_t));
	//if(slen !=sizeof(uint64_t)){kore_log(LOG_INFO,"not size of uint64!");}
	mi->cb(2);
	kore_msg_send(KORE_MSG_PARENT,KORE_MSG_SHUTDOWN,"1",0);
	//re_cancel();
	http_response(req, 200, "what",4);
	
	return (KORE_RESULT_OK);
}

struct kore_task pipe_task;
int init(int state){
if(state==KORE_MODULE_UNLOAD) return (KORE_RESULT_ERROR);
//if(worker->id !=1) return (KORE_RESULT_OK);

kore_task_create(&pipe_task,pipe_reader);
kore_task_bind_callback(&pipe_task,pipe_data_available);
kore_task_run(&pipe_task);

return (KORE_RESULT_OK);
}
void pipe_data_available(struct kore_task*t){
if(kore_task_finished(t)){kore_log(LOG_WARNING,"a task is finished.");return;}
   u_int8_t buf[BUFSIZ];
   size_t len=kore_task_channel_read(t,buf,sizeof(buf));
   if(len>sizeof(buf)) kore_log(LOG_WARNING,"truncated data from task.");
   kore_log(LOG_NOTICE,"msg %s",buf);
   
}

int pipe_reader(struct kore_task *t){
//ssize_t slen;
int err;
atexit(hani);
kore_log(LOG_INFO,"Entering into thread");
u=1;
evfd=eventfd(0,EFD_NONBLOCK | EFD_CLOEXEC);
if(evfd==-1){
kore_log(LOG_INFO,"evfd is not ok");
//return (KORE_RESULT_OK);	
}

//EOR(rawrtc_init());
libre_init();
//struct mif*mi=NULL;
mi=malloc(sizeof(struct mi*));
if(mi==NULL){kore_log(LOG_INFO,"mif is NULL");}
mi->cb=dusi;

err=pthread_mutexattr_init(&mutex_attribute);
if(err){kore_log(LOG_INFO,"no mutex attr init");}
err=pthread_mutexattr_settype(&mutex_attribute,PTHREAD_MUTEX_RECURSIVE);
if(err){kore_log(LOG_INFO,"no mutex attr set type");}
err=pthread_mutex_init(&mutex,&mutex_attribute);
if(err){kore_log(LOG_INFO,"no mutex init");}
re_set_mutex(&mutex);



kore_log(LOG_INFO,"before re_main()");
//re_main(signal_handler);
//EOR(re_main(signal_handler));
while(ab){
	printf("while\n");
re_main(NULL);
//re_main(signal_handler);
}
ab=0;
kore_log(LOG_INFO,"after re_main()");
//re_cancel();
close(evfd);
libre_close();
//before_exit();
kore_log(LOG_INFO,"***bye-bye***");
// cd fork/rawrtc/kore_rawrtc_1
return (KORE_RESULT_OK);
}
void parse_was(int flags,void*arg){
//DEBUG_PRINTF("parse_was() occured.");	
}
void hani(){
kore_log(LOG_INFO,"at exit occured.");	
close(evfd);

close(evfd);
re_cancel();
re_cancel();
libre_close();
before_exit();
before_exit();
exit(0);
}

void signal_handler(int a){
DEBUG_PRINTF("*************************signal_handler()***********************");
//cd fork/rawrtc/kore_rawrtc_1
//kore_log(LOG_INFO,"signal handler");
printf("signal***\n");
ab=0;
re_cancel();
libre_close();	
kore_worker_dispatch_signal(1);
kore_msg_send(KORE_MSG_PARENT,KORE_MSG_SHUTDOWN,"1",1);
exit(0);
}
