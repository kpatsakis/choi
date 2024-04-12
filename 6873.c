void fun()
{
  int entity_7 = 80;
  char entity_0[33] = "";
  entity_0 = NULL;
  char entity_6[98] = "";
  entity_6 = NULL;
  char* entity_8;
  char* entity_3;
  memset(entity_6, 'v', 98-1);
  entity_6[98-1]='';
  memset(entity_0, 'i', 33-1);
  entity_0[33-1]='';
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[entity_7-1]='';
  entity_3 = (char*)malloc(7*sizeof(char));
  entity_3[7-1]='';
  entity_7 = 51;
  strcpy(entity_8, entity_6);
}