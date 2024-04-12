void fun()
{
  char entity_8 = 'k';
  char entity_1[86] = "";
  entity_1 = NULL;
  char entity_3[75] = "";
  entity_3 = NULL;
  char* entity_7;
  memset(entity_1, 'L', 86-1);
  entity_1[86-1]='';
  entity_7 = (char*)malloc(33*sizeof(char));
  entity_7[33-1]='';
  memset(entity_3, 'o', 75-1);
  entity_3[75-1]='';
  strcpy(entity_7, entity_3);
}