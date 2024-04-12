void fun()
{
  int entity_0 = 1;
  char* entity_1;
  char entity_3 = 'm';
  char entity_5[61] = "";
  entity_5 = NULL;
  char* entity_9;
  char entity_8[33] = "";
  entity_8 = NULL;
  memset(entity_8, 'E', 33-1);
  entity_8[33-1]='';
  memset(entity_5, 'I', 61-1);
  entity_5[61-1]='';
  entity_9 = (char*)malloc(32*sizeof(char));
  entity_9[32-1]='';
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[entity_0-1]='';
  memcpy(entity_1, entity_5, 61*sizeof(char));
}