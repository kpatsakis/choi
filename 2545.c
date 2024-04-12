void fun()
{
  int entity_7 = 81;
  char* entity_8;
  char entity_0[73] = "";
  entity_0 = NULL;
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[entity_7-1]='';
  memset(entity_0, 'V', 73-1);
  entity_0[73-1]='';
  entity_7 = 83;
  strcpy(entity_8, entity_0);
}