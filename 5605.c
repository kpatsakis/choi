void fun()
{
  int entity_5 = 58;
  entity_5 = 68;
  char entity_4[73] = "";
  entity_4 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[entity_5-1]='';
  memset(entity_4, 'o', 73-1);
  entity_4[73-1]='';
  strcpy(entity_6, entity_4);
}