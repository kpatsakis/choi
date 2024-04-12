void fun()
{
  int entity_5 = 89;
  int entity_6 = 22;
  int entity_8 = 63;
  char* entity_4;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  memset(entity_9, 'd', entity_8-1);
  entity_9[entity_8-1]='';
  entity_4 = (char*)malloc(27*sizeof(char));
  entity_4[27-1]='';
  entity_8 = 8;
  strcpy(entity_4, entity_9);
}