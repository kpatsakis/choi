void fun()
{
  int entity_1 = 24;
  int entity_8 = 98;
  char* entity_0;
  char entity_6 = 'e';
  char entity_7[73] = "";
  entity_7 = NULL;
  memset(entity_7, 'a', 73-1);
  entity_7[73-1]='';
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[entity_8-1]='';
  entity_8 = 38;
  strcpy(entity_0, entity_7);
}