void fun()
{
  int entity_5 = 27;
  char* entity_1;
  char entity_6[entity_5] = "";
  char entity_3[25] = "";
  char entity_7 = 'f';
  memset(entity_3, 'd', 25-1);
  entity_3[25-1]='0';
  entity_1 = (char*)malloc(77*sizeof(char));
  entity_1[0]='0';
  memset(entity_6, 'x', entity_5-1);
  entity_6[entity_5-1]='0';
  strcpy(entity_1, entity_6);
}