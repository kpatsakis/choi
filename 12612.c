void fun()
{
  int entity_9 = 67;
  char entity_0[93] = "";
  char* entity_1;
  entity_1 = (char*)malloc(entity_9*sizeof(char));
  entity_1[0]='0';
  memset(entity_0, 'H', 93-1);
  entity_0[93-1]='0';
  strcpy(entity_1, entity_0);
}