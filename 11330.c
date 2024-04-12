void fun()
{
  char* entity_0;
  char entity_9[80] = "";
  entity_0 = (char*)malloc(14*sizeof(char));
  entity_0[0]='0';
  memset(entity_9, 'H', 80-1);
  entity_9[80-1]='0';
  strcpy(entity_0, entity_9);
}