void fun()
{
  char* entity_3;
  char entity_7 = 'r';
  char entity_5[49] = "";
  entity_5 = NULL;
  char entity_0[80] = "";
  entity_0 = NULL;
  memset(entity_5, 'k', 49-1);
  entity_5[49-1]='';
  memset(entity_0, 'p', 80-1);
  entity_0[80-1]='';
  entity_3 = (char*)malloc(17*sizeof(char));
  entity_3[17-1]='';
  strcpy(entity_3, entity_5);
}