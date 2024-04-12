void fun()
{
  int entity_2 = 95;
  char entity_9[71] = "";
  char* entity_0;
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[0]='0';
  memset(entity_9, 'K', 71-1);
  entity_9[71-1]='0';
  entity_2 = 20;
  strcpy(entity_0, entity_9);
}