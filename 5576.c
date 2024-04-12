void fun()
{
  char entity_2[44] = "";
  entity_2 = NULL;
  char entity_1[60] = "";
  entity_1 = NULL;
  char* entity_7;
  char entity_3[56] = "";
  entity_3 = NULL;
  memset(entity_2, 'q', 44-1);
  entity_2[44-1]='';
  entity_7 = (char*)malloc(7*sizeof(char));
  entity_7[7-1]='';
  memset(entity_3, 'U', 56-1);
  entity_3[56-1]='';
  memset(entity_1, 'C', 60-1);
  entity_1[60-1]='';
  strcpy(entity_7, entity_2);
}