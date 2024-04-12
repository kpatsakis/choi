void fun()
{
  int entity_3 = 24;
  entity_3 = 23;
  char* entity_6;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  memset(entity_9, 'x', entity_3-1);
  entity_9[entity_3-1]='';
  entity_6 = (char*)malloc(85*sizeof(char));
  entity_6[85-1]='';
  memcpy(entity_6, entity_9, entity_3*sizeof(char));
}