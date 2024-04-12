void fun()
{
  int entity_5 = 19;
  char* entity_9;
  char entity_4 = 'J';
  char entity_6[entity_5] = "";
  entity_6 = NULL;
  memset(entity_6, 'S', entity_5-1);
  entity_6[entity_5-1]='';
  entity_9 = (char*)malloc(49*sizeof(char));
  entity_9[49-1]='';
  entity_5 = 80;
  memcpy(entity_9, entity_6, entity_5*sizeof(char));
}