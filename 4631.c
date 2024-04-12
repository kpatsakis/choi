void fun()
{
  int entity_4 = 88;
  char entity_5[55] = "";
  entity_5 = NULL;
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  char* entity_6;
  char entity_8[20] = "";
  entity_8 = NULL;
  memset(entity_8, 'Q', 20-1);
  entity_8[20-1]='';
  entity_6 = (char*)malloc(48*sizeof(char));
  entity_6[48-1]='';
  memset(entity_2, 'a', entity_4-1);
  entity_2[entity_4-1]='';
  memset(entity_5, 'X', 55-1);
  entity_5[55-1]='';
  strcpy(entity_6, entity_2);
}