void fun()
{
  int entity_0 = 26;
  char* entity_9;
  char entity_7[entity_0] = "";
  entity_7 = NULL;
  memset(entity_7, 'm', entity_0-1);
  entity_7[entity_0-1]='';
  entity_9 = (char*)malloc(23*sizeof(char));
  entity_9[23-1]='';
  memcpy(entity_9, entity_7, entity_0*sizeof(char));
}