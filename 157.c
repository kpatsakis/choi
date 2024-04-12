void fun()
{
  char entity_1[31] = "";
  entity_1 = NULL;
  char entity_5[53] = "";
  entity_5 = NULL;
  char* entity_3;
  memset(entity_5, 'a', 53-1);
  entity_5[53-1]='';
  memset(entity_1, 'h', 31-1);
  entity_1[31-1]='';
  entity_3 = (char*)malloc(17*sizeof(char));
  entity_3[17-1]='';
  strcpy(entity_3, entity_1);
}