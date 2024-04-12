void fun()
{
  char entity_4[98] = "";
  entity_4 = NULL;
  char entity_3[9] = "";
  entity_3 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(15*sizeof(char));
  entity_2[15-1]='';
  memset(entity_4, 'h', 98-1);
  entity_4[98-1]='';
  memset(entity_3, 'C', 9-1);
  entity_3[9-1]='';
  entity_4[44] = 'I';
}