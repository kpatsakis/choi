void fun()
{
  int entity_5 = 96;
  char entity_0[entity_5] = "";
  char* entity_9;
  entity_9 = (char*)malloc(22*sizeof(char));
  entity_9[0]='0';
  memset(entity_0, 'G', entity_5-1);
  entity_0[entity_5-1]='0';
  strcpy(entity_9, entity_0);
}