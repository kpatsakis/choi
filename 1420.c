void fun()
{
  int entity_3 = 9;
  int entity_2 = 97;
  char* entity_0;
  char entity_8[15] = "";
  entity_8 = NULL;
  char* entity_9;
  char entity_5[entity_3] = "";
  entity_5 = NULL;
  memset(entity_5, 'Y', entity_3-1);
  entity_5[entity_3-1]='';
  entity_0 = (char*)malloc(50*sizeof(char));
  entity_0[50-1]='';
  entity_9 = (char*)malloc(71*sizeof(char));
  entity_9[71-1]='';
  memset(entity_8, 'U', 15-1);
  entity_8[15-1]='';
  strcpy(entity_9, entity_5);
}