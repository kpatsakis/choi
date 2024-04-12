void fun()
{
  int entity_7 = 60;
  entity_7 = 36;
  char entity_1[entity_7] = "";
  entity_1 = NULL;
  char* entity_9;
  char* entity_5;
  char entity_0[33] = "";
  entity_0 = NULL;
  memset(entity_1, 'x', entity_7-1);
  entity_1[entity_7-1]='';
  memset(entity_0, 'F', 33-1);
  entity_0[33-1]='';
  entity_9 = (char*)malloc(16*sizeof(char));
  entity_9[16-1]='';
  entity_5 = (char*)malloc(41*sizeof(char));
  entity_5[41-1]='';
  memcpy(entity_9, entity_1, entity_7*sizeof(char));
}