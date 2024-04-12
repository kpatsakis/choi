void fun()
{
  int entity_6 = 82;
  char entity_2[76] = "";
  entity_2 = NULL;
  char* entity_5;
  char entity_8[98] = "";
  entity_8 = NULL;
  char entity_1 = 'T';
  memset(entity_2, 'n', 76-1);
  entity_2[76-1]='';
  entity_5 = (char*)malloc(26*sizeof(char));
  entity_5[26-1]='';
  memset(entity_8, 'C', 98-1);
  entity_8[98-1]='';
  strcpy(entity_5, entity_8);
}