void fun()
{
  char entity_0[53] = "";
  char* entity_5;
  entity_5 = (char*)malloc(55*sizeof(char));
  entity_5[0]='0';
  memset(entity_0, 'n', 53-1);
  entity_0[53-1]='0';
  strcpy(entity_5, entity_0);
}