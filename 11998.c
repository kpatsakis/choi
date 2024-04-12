void fun()
{
  char entity_4[25] = "";
  char* entity_9;
  memset(entity_4, 'x', 25-1);
  entity_4[25-1]='0';
  entity_9 = (char*)malloc(89*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_4);
}