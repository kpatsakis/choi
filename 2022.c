void fun()
{
  int entity_1 = 52;
  int entity_6 = 68;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  char entity_7[39] = "";
  entity_7 = NULL;
  char* entity_9;
  memset(entity_7, 's', 39-1);
  entity_7[39-1]='';
  entity_9 = (char*)malloc(41*sizeof(char));
  entity_9[41-1]='';
  memset(entity_5, 'V', entity_1-1);
  entity_5[entity_1-1]='';
  memcpy(entity_9, entity_5, entity_1*sizeof(char));
}