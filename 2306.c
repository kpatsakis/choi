void fun()
{
  int entity_0 = 18;
  char entity_5[entity_0] = "";
  entity_5 = NULL;
  char* entity_6;
  memset(entity_5, 'U', entity_0-1);
  entity_5[entity_0-1]='';
  entity_6 = (char*)malloc(73*sizeof(char));
  entity_6[73-1]='';
  entity_0 = 21;
  strcpy(entity_6, entity_5);
}