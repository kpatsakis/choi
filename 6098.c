void fun()
{
  int entity_5 = 36;
  char* entity_8;
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  entity_8 = (char*)malloc(93*sizeof(char));
  entity_8[93-1]='';
  memset(entity_9, 'r', entity_5-1);
  entity_9[entity_5-1]='';
  memcpy(entity_8, entity_9, entity_5*sizeof(char));
}