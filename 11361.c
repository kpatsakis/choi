void fun()
{
  int entity_7 = 42;
  char entity_5[77] = "";
  char entity_1[91] = "";
  char entity_2[54] = "";
  char* entity_0;
  memset(entity_5, 'D', 77-1);
  entity_5[77-1]='0';
  entity_0 = (char*)malloc(63*sizeof(char));
  entity_0[0]='0';
  memset(entity_1, 'x', 91-1);
  entity_1[91-1]='0';
  memset(entity_2, 'L', 54-1);
  entity_2[54-1]='0';
  strcpy(entity_0, entity_2);
}