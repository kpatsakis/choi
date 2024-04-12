void fun()
{
  char entity_4[61] = "";
  entity_4 = NULL;
  char entity_1[75] = "";
  entity_1 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(15*sizeof(char));
  entity_7[15-1]='';
  memset(entity_4, 'k', 61-1);
  entity_4[61-1]='';
  memset(entity_1, 'M', 75-1);
  entity_1[75-1]='';
  strcpy(entity_7, entity_4);
}