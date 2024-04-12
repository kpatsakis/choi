void fun()
{
  int entity_9 = 97;
  int entity_5 = 23;
  char* entity_4;
  char entity_6[13] = "";
  entity_6 = NULL;
  entity_4 = (char*)malloc(entity_9*sizeof(char));
  entity_4[entity_9-1]='';
  memset(entity_6, 'x', 13-1);
  entity_6[13-1]='';
  strcpy(entity_4, entity_6);
}