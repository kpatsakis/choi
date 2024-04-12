void fun()
{
  int entity_9 = 94;
  char* entity_0;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  char* entity_4;
  memset(entity_8, 'V', entity_9-1);
  entity_8[entity_9-1]='';
  entity_0 = (char*)malloc(80*sizeof(char));
  entity_0[80-1]='';
  entity_4 = (char*)malloc(20*sizeof(char));
  entity_4[20-1]='';
  strcpy(entity_0, entity_8);
}