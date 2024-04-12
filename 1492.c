void fun()
{
  char entity_9[13] = "";
  entity_9 = NULL;
  char entity_3[98] = "";
  entity_3 = NULL;
  char* entity_8;
  char entity_6 = 'N';
  char entity_5[31] = "";
  entity_5 = NULL;
  entity_8 = (char*)malloc(18*sizeof(char));
  entity_8[18-1]='';
  memset(entity_3, 'L', 98-1);
  entity_3[98-1]='';
  memset(entity_9, 'q', 13-1);
  entity_9[13-1]='';
  memset(entity_5, 'b', 31-1);
  entity_5[31-1]='';
  strcpy(entity_8, entity_3);
}