void fun()
{
  char* entity_7;
  char entity_4[17] = "";
  entity_4 = NULL;
  char entity_8 = 'c';
  char entity_5[42] = "";
  entity_5 = NULL;
  memset(entity_4, 'm', 17-1);
  entity_4[17-1]='';
  entity_7 = (char*)malloc(81*sizeof(char));
  entity_7[81-1]='';
  memset(entity_5, 'Q', 42-1);
  entity_5[42-1]='';
  memcpy(entity_7, entity_4, 17*sizeof(char));
}