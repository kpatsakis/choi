void fun()
{
  int entity_0 = 39;
  char* entity_9;
  char entity_8[73] = "";
  entity_8 = NULL;
  char* entity_2;
  char entity_6[entity_0] = "";
  entity_6 = NULL;
  memset(entity_6, 'P', entity_0-1);
  entity_6[entity_0-1]='';
  entity_9 = (char*)malloc(4*sizeof(char));
  entity_9[4-1]='';
  memset(entity_8, 'n', 73-1);
  entity_8[73-1]='';
  entity_2 = (char*)malloc(33*sizeof(char));
  entity_2[33-1]='';
  entity_0 = 6;
  strcpy(entity_2, entity_6);
}