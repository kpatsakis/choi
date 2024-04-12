void fun()
{
  int entity_9 = 90;
  int entity_0 = 95;
  char entity_2 = 'O';
  char entity_6[69] = "";
  entity_6 = NULL;
  char* entity_7;
  char entity_5[73] = "";
  entity_5 = NULL;
  memset(entity_5, 'y', 73-1);
  entity_5[73-1]='';
  memset(entity_6, 'E', 69-1);
  entity_6[69-1]='';
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  strcpy(entity_7, entity_6);
}