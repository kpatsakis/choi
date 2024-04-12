void fun()
{
  int entity_8 = 53;
  int entity_3 = 31;
  char entity_7[33] = "";
  entity_7 = NULL;
  char* entity_0;
  char* entity_1;
  memset(entity_7, 'j', 33-1);
  entity_7[33-1]='';
  entity_1 = (char*)malloc(50*sizeof(char));
  entity_1[50-1]='';
  entity_0 = (char*)malloc(14*sizeof(char));
  entity_0[14-1]='';
  memcpy(entity_0, entity_7, 33*sizeof(char));
}