void fun()
{
  char* entity_4;
  char entity_9[72] = "";
  char entity_2[88] = "";
  char entity_5[42] = "";
  memset(entity_2, 'X', 88-1);
  entity_2[88-1]='0';
  memset(entity_5, 'U', 42-1);
  entity_5[42-1]='0';
  entity_4 = (char*)malloc(55*sizeof(char));
  entity_4[0]='0';
  memset(entity_9, 'H', 72-1);
  entity_9[72-1]='0';
  strcpy(entity_4, entity_9);
}