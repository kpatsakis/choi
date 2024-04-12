void fun()
{
  int entity_8 = 27;
  int entity_4 = 74;
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  char entity_0[12] = "";
  entity_0 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(20*sizeof(char));
  entity_5[20-1]='';
  memset(entity_0, 'v', 12-1);
  entity_0[12-1]='';
  memset(entity_2, 'P', entity_4-1);
  entity_2[entity_4-1]='';
  entity_4 = 73;
  strcpy(entity_5, entity_2);
}