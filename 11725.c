void fun()
{
  char* entity_5;
  char entity_4[59] = "";
  memset(entity_4, 'x', 59-1);
  entity_4[59-1]='0';
  entity_5 = (char*)malloc(26*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_4);
}