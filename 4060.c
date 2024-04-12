void fun()
{
  int entity_8 = 94;
  char entity_3 = 'X';
  char* entity_5;
  char entity_2[96] = "";
  entity_2 = NULL;
  char entity_9 = 'Z';
  entity_5 = (char*)malloc(entity_8*sizeof(char));
  entity_5[entity_8-1]='';
  memset(entity_2, 'U', 96-1);
  entity_2[96-1]='';
  strcpy(entity_5, entity_2);
}