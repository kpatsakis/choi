void fun()
{
  int entity_3 = 69;
  char entity_5[97] = "";
  entity_5 = NULL;
  char* entity_8;
  char entity_0[13] = "";
  entity_0 = NULL;
  char entity_4[entity_3] = "";
  entity_4 = NULL;
  char* entity_9;
  memset(entity_5, 'J', 97-1);
  entity_5[97-1]='';
  memset(entity_0, 'O', 13-1);
  entity_0[13-1]='';
  memset(entity_4, 'n', entity_3-1);
  entity_4[entity_3-1]='';
  entity_8 = (char*)malloc(98*sizeof(char));
  entity_8[98-1]='';
  entity_9 = (char*)malloc(82*sizeof(char));
  entity_9[82-1]='';
  entity_3 = 3;
  strcpy(entity_9, entity_4);
}