void fun()
{
  int entity_9 = 81;
  char* entity_0;
  char entity_7[84] = "";
  entity_7 = NULL;
  char entity_8[13] = "";
  entity_8 = NULL;
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[entity_9-1]='';
  memset(entity_7, 'm', 84-1);
  entity_7[84-1]='';
  memset(entity_8, 'X', 13-1);
  entity_8[13-1]='';
  memcpy(entity_0, entity_7, 84*sizeof(char));
}