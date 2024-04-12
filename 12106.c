void fun()
{
  int entity_5 = 56;
  char* entity_0;
  char entity_7[entity_5] = "";
  char entity_8 = 's';
  memset(entity_7, 'T', entity_5-1);
  entity_7[entity_5-1]='0';
  entity_0 = (char*)malloc(10*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_7);
}