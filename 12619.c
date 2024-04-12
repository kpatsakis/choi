void fun()
{
  int entity_2 = 88;
  int entity_5 = 100;
  char entity_4[entity_5] = "";
  char* entity_1;
  char entity_0[33] = "";
  memset(entity_0, 'Q', 33-1);
  entity_0[33-1]='0';
  entity_1 = (char*)malloc(23*sizeof(char));
  entity_1[0]='0';
  memset(entity_4, 'X', entity_5-1);
  entity_4[entity_5-1]='0';
  strcpy(entity_1, entity_4);
}