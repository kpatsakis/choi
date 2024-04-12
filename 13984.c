void fun()
{
  int entity_2 = 42;
  int entity_4 = 91;
  entity_2 = 42;
  char entity_0[38] = "";
  char entity_8[entity_2] = "";
  char* entity_3;
  char* entity_5;
  entity_3 = (char*)malloc(43*sizeof(char));
  entity_3[0]='0';
  entity_5 = (char*)malloc(77*sizeof(char));
  entity_5[0]='0';
  memset(entity_8, 'k', entity_2-1);
  entity_8[entity_2-1]='0';
  memset(entity_0, 'R', 38-1);
  entity_0[38-1]='0';
  strcpy(entity_5, entity_8);
}