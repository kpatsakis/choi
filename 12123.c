void fun()
{
  int entity_9 = 91;
  char entity_1[93] = "";
  char* entity_0;
  memset(entity_1, 'P', 93-1);
  entity_1[93-1]='0';
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_1);
}