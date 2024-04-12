void fun()
{
  int entity_9 = 30;
  char* entity_0;
  char entity_6[58] = "";
  entity_6 = NULL;
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[entity_9-1]='';
  memset(entity_6, 'M', 58-1);
  entity_6[58-1]='';
  memcpy(entity_0, entity_6, 58*sizeof(char));
}