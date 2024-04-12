void fun()
{
  int entity_3 = 80;
  char entity_9[73] = "";
  entity_9 = NULL;
  char entity_0[7] = "";
  entity_0 = NULL;
  char* entity_7;
  memset(entity_9, 'D', 73-1);
  entity_9[73-1]='';
  entity_7 = (char*)malloc(5*sizeof(char));
  entity_7[5-1]='';
  memset(entity_0, 'w', 7-1);
  entity_0[7-1]='';
  strcpy(entity_7, entity_0);
}