void fun()
{
  int entity_3 = 17;
  char* entity_0;
  char* entity_6;
  char entity_1 = 'P';
  char entity_7[98] = "";
  entity_7 = NULL;
  char entity_5[84] = "";
  entity_5 = NULL;
  memset(entity_7, 'H', 98-1);
  entity_7[98-1]='';
  entity_0 = (char*)malloc(entity_3*sizeof(char));
  entity_0[entity_3-1]='';
  memset(entity_5, 'b', 84-1);
  entity_5[84-1]='';
  entity_6 = (char*)malloc(65*sizeof(char));
  entity_6[65-1]='';
  strcpy(entity_0, entity_7);
}