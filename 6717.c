void fun()
{
  int entity_5 = 67;
  int entity_7 = 7;
  int entity_8 = 80;
  char entity_6[73] = "";
  entity_6 = NULL;
  char* entity_4;
  char entity_2 = 'l';
  entity_4 = (char*)malloc(entity_7*sizeof(char));
  entity_4[entity_7-1]='';
  memset(entity_6, 'a', 73-1);
  entity_6[73-1]='';
  strcpy(entity_4, entity_6);
}