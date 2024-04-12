void fun()
{
  int entity_5 = 15;
  int entity_6 = 56;
  char entity_0[entity_6] = "";
  char entity_4 = 'U';
  char* entity_9;
  memset(entity_0, 'y', entity_6-1);
  entity_0[entity_6-1]='0';
  entity_9 = (char*)malloc(22*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_0);
}