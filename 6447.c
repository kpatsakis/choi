void fun()
{
  char* entity_8;
  char* entity_3;
  char entity_4[84] = "";
  entity_4 = NULL;
  char entity_2[98] = "";
  entity_2 = NULL;
  entity_3 = (char*)malloc(60*sizeof(char));
  entity_3[60-1]='';
  entity_8 = (char*)malloc(45*sizeof(char));
  entity_8[45-1]='';
  memset(entity_4, 'R', 84-1);
  entity_4[84-1]='';
  memset(entity_2, 'd', 98-1);
  entity_2[98-1]='';
  strcpy(entity_8, entity_2);
}