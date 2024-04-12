void fun()
{
  int entity_6 = 73;
  entity_6 = 73;
  char entity_7[61] = "";
  entity_7 = NULL;
  char entity_2[15] = "";
  entity_2 = NULL;
  char* entity_4;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  entity_4 = (char*)malloc(88*sizeof(char));
  entity_4[88-1]='';
  memset(entity_1, 'P', entity_6-1);
  entity_1[entity_6-1]='';
  memset(entity_2, 'S', 15-1);
  entity_2[15-1]='';
  memset(entity_7, 'a', 61-1);
  entity_7[61-1]='';
  strcpy(entity_4, entity_1);
}