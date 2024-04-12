void fun()
{
  int entity_8 = 37;
  entity_8 = 83;
  char* entity_1;
  char entity_2[73] = "";
  entity_2 = NULL;
  char entity_5 = 'P';
  memset(entity_2, 'J', 73-1);
  entity_2[73-1]='';
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[entity_8-1]='';
  strcpy(entity_1, entity_2);
}