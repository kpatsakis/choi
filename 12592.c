void fun()
{
  int entity_2 = 2;
  char entity_1[entity_2] = "";
  char entity_6[76] = "";
  char* entity_0;
  memset(entity_6, 'a', 76-1);
  entity_6[76-1]='0';
  memset(entity_1, 'k', entity_2-1);
  entity_1[entity_2-1]='0';
  entity_0 = (char*)malloc(77*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_1);
}