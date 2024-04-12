void fun()
{
  int entity_8 = 6;
  char* entity_3;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  char entity_4 = 'A';
  char entity_2[17] = "";
  entity_2 = NULL;
  char* entity_0;
  memset(entity_2, 'L', 17-1);
  entity_2[17-1]='';
  memset(entity_9, 'E', entity_8-1);
  entity_9[entity_8-1]='';
  entity_0 = (char*)malloc(55*sizeof(char));
  entity_0[55-1]='';
  entity_3 = (char*)malloc(28*sizeof(char));
  entity_3[28-1]='';
  entity_8 = 38;
  strcpy(entity_3, entity_9);
}