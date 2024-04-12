void fun()
{
  char entity_4[71] = "";
  char entity_0 = 'J';
  char entity_5 = 'I';
  char* entity_1;
  entity_1 = (char*)malloc(77*sizeof(char));
  entity_1[0]='0';
  memset(entity_4, 'X', 71-1);
  entity_4[71-1]='0';
  strcpy(entity_1, entity_4);
}