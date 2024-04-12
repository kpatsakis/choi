void fun()
{
  char* entity_1;
  char entity_8[5] = "";
  entity_8 = NULL;
  char entity_9 = 'L';
  char* entity_6;
  char* entity_0;
  entity_0 = (char*)malloc(32*sizeof(char));
  entity_0[32-1]='';
  entity_1 = (char*)malloc(33*sizeof(char));
  entity_1[33-1]='';
  memset(entity_8, 'U', 5-1);
  entity_8[5-1]='';
  entity_6 = (char*)malloc(2*sizeof(char));
  entity_6[2-1]='';
  memcpy(entity_6, entity_8, 5*sizeof(char));
}