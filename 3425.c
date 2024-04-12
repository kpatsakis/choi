void fun()
{
  int entity_7 = 53;
  char entity_9[entity_7] = "";
  entity_9 = NULL;
  char* entity_8;
  memset(entity_9, 'm', entity_7-1);
  entity_9[entity_7-1]='';
  entity_8 = (char*)malloc(76*sizeof(char));
  entity_8[76-1]='';
  memcpy(entity_8, entity_9, entity_7*sizeof(char));
}