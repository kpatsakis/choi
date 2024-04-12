void fun()
{
  int entity_6 = 68;
  char* entity_9;
  char entity_1[84] = "";
  entity_1 = NULL;
  char entity_0[62] = "";
  entity_0 = NULL;
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[entity_6-1]='';
  memset(entity_1, 'm', 84-1);
  entity_1[84-1]='';
  memset(entity_0, 'W', 62-1);
  entity_0[62-1]='';
  memcpy(entity_9, entity_1, 84*sizeof(char));
}