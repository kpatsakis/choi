void fun()
{
  int entity_9 = 34;
  entity_9 = 99;
  char* entity_8;
  char entity_7[53] = "";
  entity_7 = NULL;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  entity_8 = (char*)malloc(84*sizeof(char));
  entity_8[84-1]='';
  memset(entity_0, 'W', entity_9-1);
  entity_0[entity_9-1]='';
  memset(entity_7, 'T', 53-1);
  entity_7[53-1]='';
  memcpy(entity_8, entity_0, entity_9*sizeof(char));
}