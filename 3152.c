void fun()
{
  int entity_4 = 2;
  int entity_5 = 79;
  char entity_3[26] = "";
  entity_3 = NULL;
  char entity_6[25] = "";
  entity_6 = NULL;
  char* entity_8;
  char entity_7[99] = "";
  entity_7 = NULL;
  memset(entity_3, 'H', 26-1);
  entity_3[26-1]='';
  memset(entity_7, 'm', 99-1);
  entity_7[99-1]='';
  memset(entity_6, 'X', 25-1);
  entity_6[25-1]='';
  entity_8 = (char*)malloc(entity_4*sizeof(char));
  entity_8[entity_4-1]='';
  strcpy(entity_8, entity_6);
}