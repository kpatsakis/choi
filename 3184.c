void fun()
{
  int entity_0 = 37;
  char entity_3[entity_0] = "";
  entity_3 = NULL;
  char entity_8[97] = "";
  entity_8 = NULL;
  char* entity_5;
  char entity_7[43] = "";
  entity_7 = NULL;
  memset(entity_7, 'B', 43-1);
  entity_7[43-1]='';
  entity_5 = (char*)malloc(78*sizeof(char));
  entity_5[78-1]='';
  memset(entity_8, 'K', 97-1);
  entity_8[97-1]='';
  memset(entity_3, 'f', entity_0-1);
  entity_3[entity_0-1]='';
  entity_0 = 51;
  strcpy(entity_5, entity_3);
}