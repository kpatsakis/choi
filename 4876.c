void fun()
{
  int entity_3 = 72;
  char entity_9[73] = "";
  entity_9 = NULL;
  char* entity_6;
  char* entity_1;
  char entity_7[entity_3] = "";
  entity_7 = NULL;
  memset(entity_9, 'E', 73-1);
  entity_9[73-1]='';
  entity_6 = (char*)malloc(79*sizeof(char));
  entity_6[79-1]='';
  entity_1 = (char*)malloc(53*sizeof(char));
  entity_1[53-1]='';
  memset(entity_7, 'X', entity_3-1);
  entity_7[entity_3-1]='';
  entity_3 = 12;
  strcpy(entity_6, entity_7);
}