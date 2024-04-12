void fun()
{
  int entity_5 = 98;
  char entity_9[80] = "";
  char* entity_0;
  memset(entity_9, 'A', 80-1);
  entity_9[80-1]='0';
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_9);
}