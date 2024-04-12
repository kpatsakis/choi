void fun()
{
  int entity_6 = 21;
  char* entity_4;
  char entity_8[97] = "";
  entity_8 = NULL;
  char* entity_1;
  char entity_3[98] = "";
  entity_3 = NULL;
  char entity_7[83] = "";
  entity_7 = NULL;
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[entity_6-1]='';
  memset(entity_7, 'o', 83-1);
  entity_7[83-1]='';
  entity_4 = (char*)malloc(90*sizeof(char));
  entity_4[90-1]='';
  memset(entity_8, 'C', 97-1);
  entity_8[97-1]='';
  memset(entity_3, 'v', 98-1);
  entity_3[98-1]='';
  strcpy(entity_1, entity_7);
}