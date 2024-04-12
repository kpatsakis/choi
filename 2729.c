void fun()
{
  int entity_8 = 84;
  entity_8 = 7;
  char* entity_9;
  char entity_3[5] = "";
  entity_3 = NULL;
  char* entity_7;
  char entity_6[73] = "";
  entity_6 = NULL;
  memset(entity_6, 'L', 73-1);
  entity_6[73-1]='';
  memset(entity_3, 'x', 5-1);
  entity_3[5-1]='';
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[entity_8-1]='';
  entity_9 = (char*)malloc(70*sizeof(char));
  entity_9[70-1]='';
  strcpy(entity_7, entity_6);
}