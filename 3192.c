void fun()
{
  int entity_8 = 39;
  entity_8 = 39;
  char* entity_0;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  char entity_5 = 'W';
  memset(entity_2, 'q', entity_8-1);
  entity_2[entity_8-1]='';
  entity_0 = (char*)malloc(7*sizeof(char));
  entity_0[7-1]='';
  strcpy(entity_0, entity_2);
}