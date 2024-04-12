void fun()
{
  int entity_6 = 84;
  int entity_2 = 75;
  char entity_8[12] = "";
  entity_8 = NULL;
  char entity_3[53] = "";
  entity_3 = NULL;
  char entity_5[43] = "";
  entity_5 = NULL;
  char* entity_9;
  memset(entity_8, 'H', 12-1);
  entity_8[12-1]='';
  memset(entity_5, 'B', 43-1);
  entity_5[43-1]='';
  memset(entity_3, 'I', 53-1);
  entity_3[53-1]='';
  entity_9 = (char*)malloc(entity_2*sizeof(char));
  entity_9[entity_2-1]='';
  strcpy(entity_9, entity_5);
}