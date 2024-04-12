void fun()
{
  char* entity_5;
  char entity_2[33] = "";
  entity_2 = NULL;
  char entity_7[52] = "";
  entity_7 = NULL;
  char entity_8[38] = "";
  entity_8 = NULL;
  entity_5 = (char*)malloc(33*sizeof(char));
  entity_5[33-1]='';
  memset(entity_2, 'J', 33-1);
  entity_2[33-1]='';
  memset(entity_7, 't', 52-1);
  entity_7[52-1]='';
  memset(entity_8, 'i', 38-1);
  entity_8[38-1]='';
  strcpy(entity_5, entity_2);
}