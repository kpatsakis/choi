void fun()
{
  int entity_1 = 45;
  char entity_0[entity_1] = "";
  char* entity_9;
  memset(entity_0, 'C', entity_1-1);
  entity_0[entity_1-1]='0';
  entity_9 = (char*)malloc(3*sizeof(char));
  entity_9[0]='0';
  entity_1 = 91;
  strcpy(entity_9, entity_0);
}