void fun()
{
  int entity_3 = 2;
  char entity_4[73] = "";
  entity_4 = NULL;
  char entity_9 = 'M';
  char* entity_5;
  entity_5 = (char*)malloc(58*sizeof(char));
  entity_5[58-1]='';
  memset(entity_4, 'K', 73-1);
  entity_4[73-1]='';
  strcpy(entity_5, entity_4);
}