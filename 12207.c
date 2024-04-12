void fun()
{
  int entity_4 = 72;
  char* entity_0;
  char entity_5[78] = "";
  char entity_9[entity_4] = "";
  memset(entity_5, 'z', 78-1);
  entity_5[78-1]='0';
  entity_0 = (char*)malloc(42*sizeof(char));
  entity_0[0]='0';
  memset(entity_9, 'c', entity_4-1);
  entity_9[entity_4-1]='0';
  strcpy(entity_0, entity_9);
}