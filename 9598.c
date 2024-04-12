void fun()
{
  int entity_0 = 66;
  char entity_9[60] = "";
  entity_9 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[entity_0-1]='';
  memset(entity_9, 'h', 60-1);
  entity_9[60-1]='';
  memcpy(entity_5, entity_9, 60*sizeof(char));
}