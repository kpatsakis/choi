void fun()
{
  int entity_9 = 14;
  char entity_3 = 'q';
  char* entity_8;
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  entity_8 = (char*)malloc(64*sizeof(char));
  entity_8[64-1]='';
  memset(entity_6, 'l', entity_9-1);
  entity_6[entity_9-1]='';
  entity_9 = 8;
  memcpy(entity_8, entity_6, entity_9*sizeof(char));
}