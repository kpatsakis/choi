void fun()
{
  char* entity_4;
  char entity_6[99] = "";
  entity_6 = NULL;
  char entity_1[38] = "";
  entity_1 = NULL;
  char entity_2[25] = "";
  entity_2 = NULL;
  memset(entity_1, 'a', 38-1);
  entity_1[38-1]='';
  memset(entity_2, 'I', 25-1);
  entity_2[25-1]='';
  entity_4 = (char*)malloc(47*sizeof(char));
  entity_4[47-1]='';
  memset(entity_6, 'B', 99-1);
  entity_6[99-1]='';
  strcpy(entity_4, entity_1);
}