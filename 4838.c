void fun()
{
  int entity_8 = 2;
  entity_8 = 12;
  char entity_5[entity_8] = "";
  entity_5 = NULL;
  char* entity_2;
  char entity_6[25] = "";
  entity_6 = NULL;
  entity_2 = (char*)malloc(53*sizeof(char));
  entity_2[53-1]='';
  memset(entity_6, 'k', 25-1);
  entity_6[25-1]='';
  memset(entity_5, 'H', entity_8-1);
  entity_5[entity_8-1]='';
  memcpy(entity_2, entity_5, entity_8*sizeof(char));
}