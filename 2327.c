void fun()
{
  int entity_5 = 54;
  int entity_9 = 86;
  char entity_0[entity_5] = "";
  entity_0 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(71*sizeof(char));
  entity_4[71-1]='';
  memset(entity_0, 'W', entity_5-1);
  entity_0[entity_5-1]='';
  strcpy(entity_4, entity_0);
}