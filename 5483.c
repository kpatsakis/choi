void fun()
{
  int entity_4 = 9;
  char* entity_2;
  char entity_6[25] = "";
  entity_6 = NULL;
  char entity_5[39] = "";
  entity_5 = NULL;
  memset(entity_6, 'H', 25-1);
  entity_6[25-1]='';
  memset(entity_5, 'P', 39-1);
  entity_5[39-1]='';
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  entity_4 = 42;
  memcpy(entity_2, entity_6, 25*sizeof(char));
}