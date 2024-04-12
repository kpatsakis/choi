void fun()
{
  int entity_5 = 93;
  char entity_6[entity_5] = "";
  entity_6 = NULL;
  char* entity_9;
  memset(entity_6, 'i', entity_5-1);
  entity_6[entity_5-1]='';
  entity_9 = (char*)malloc(96*sizeof(char));
  entity_9[96-1]='';
  memcpy(entity_9, entity_6, entity_5*sizeof(char));
}