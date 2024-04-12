void fun()
{
  char entity_7[74] = "";
  entity_7 = NULL;
  char entity_9[64] = "";
  entity_9 = NULL;
  char entity_3[75] = "";
  entity_3 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(44*sizeof(char));
  entity_5[44-1]='';
  memset(entity_7, 'h', 74-1);
  entity_7[74-1]='';
  memset(entity_9, 'J', 64-1);
  entity_9[64-1]='';
  memset(entity_3, 'P', 75-1);
  entity_3[75-1]='';
  strcpy(entity_5, entity_3);
}