typedef void* protocol_obj_t;
void* call_cloner(void* fun, void* mem);
void call_finalizer(void* fun, void* mem, int call_finalizer_only);
void* ncmemdup(void* block);
void* gc_ncmemdup(void* block);
struct IA
{
    protocol_obj_t _protocol_obj;
    void(*finalize)(void*);
    void*(*clone)(void*);
    void(*show)(protocol_obj_t);
};
struct sA
{
    char* a;
    char* b;
};

void come_gc_init();
void come_boehm_gc_init();
void come_gc_final();
void* igc_calloc(long count, long size);
void igc_increment_ref_count(void* mem);
void igc_decrement_ref_count(void* mem);
void unwrap_exception(char* sname, int sline, char* mem);
char* strncpy(char* str, char* str2, int n);
int strlen(char* str);
void puts(char* str);
struct sA* sAp_initialize(struct sA* self, char* a, char* b);
void sAp_show(struct sA* self);
int main(int argc, char** argv);
void sA_finalize(struct sA* self);
struct sA* sA_clone(struct sA* self);

struct sA* sAp_initialize(struct sA* self, char* a, char* b)
{
void* right_value0;
self->a=a;
self->b=ncmemdup(b);
;
return self;
}

void sAp_show(struct sA* self)
{
(puts(self->a));
(puts(self->b));
}

int main(int argc, char** argv)
{
void* right_value1;
void* right_value2;
void* right_value3;
void* right_value4;
void* right_value7;
void* right_value8;
char* a="ABC";
char* b=(right_value1 = igc_calloc(128,1));
(strncpy(b,"DFE",128));
struct IA* protocol_interface_tmp0 = (right_value2 = igc_calloc(1,32));
protocol_interface_tmp0->_protocol_obj = (void*)(right_value4 = (right_value4=sAp_initialize((right_value3 = igc_calloc(1,16)),a,b)));
protocol_interface_tmp0->finalize = (void*)sA_finalize;
protocol_interface_tmp0->clone = (void*)sA_clone;
protocol_interface_tmp0->show = (void*)sAp_show;
struct IA* ia=protocol_interface_tmp0;
ia->show(ia->_protocol_obj);
struct IA* ib=(right_value7 = ncmemdup(ia));
 ((struct IA*)right_value7)->_protocol_obj = call_cloner(ia->clone, ia->_protocol_obj);
;
ib->show(ib->_protocol_obj);
igc_decrement_ref_count(b);
call_finalizer(ia->finalize, ia->_protocol_obj, 0);
igc_decrement_ref_count(ia);
call_finalizer(ib->finalize, ib->_protocol_obj, 0);
igc_decrement_ref_count(ib);
return 0;
}

void sA_finalize(struct sA* self)
{
if(self!=(((void*)0))&&self->b!=(((void*)0))) {
igc_decrement_ref_count((self->b));
}
}

struct sA* sA_clone(struct sA* self)
{
void* right_value5;
void* right_value6;
struct sA* result=(right_value5 = igc_calloc(1,16));
result->a=self->a;
if(self!=(((void*)0))&&self->b!=(((void*)0))) {
result->b=ncmemdup(self->b);
;
}
return result;
}

