void fun()
{
  char entity_6[52] = "";
  entity_6 = NULL;
  char* entity_4;
  char entity_5[26] = "";
  entity_5 = NULL;
  memset(entity_5, 'F', 26-1);
  entity_5[26-1]='';
  entity_4 = (char*)malloc(7*sizeof(char));
  entity_4[7-1]='';
  memset(entity_6, 'L', 52-1);
  entity_6[52-1]='';
  strcpy(entity_4, entity_5);
}