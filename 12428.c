void fun()
{
  int entity_5 = 41;
  char entity_3[75] = "";
  char* entity_1;
  char entity_0[entity_5] = "";
  memset(entity_3, 'U', 75-1);
  entity_3[75-1]='0';
  entity_1 = (char*)malloc(23*sizeof(char));
  entity_1[0]='0';
  memset(entity_0, 'i', entity_5-1);
  entity_0[entity_5-1]='0';
  strcpy(entity_1, entity_0);
}