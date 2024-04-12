void fun()
{
  int entity_5 = 88;
  char entity_1[entity_5] = "";
  char entity_4 = 't';
  char* entity_0;
  memset(entity_1, 'F', entity_5-1);
  entity_1[entity_5-1]='0';
  entity_0 = (char*)malloc(50*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_1);
}