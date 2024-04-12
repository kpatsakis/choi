void fun()
{
  char* entity_8;
  char entity_9[98] = "";
  entity_8 = (char*)malloc(50*sizeof(char));
  entity_8[0]='0';
  memset(entity_9, 'U', 98-1);
  entity_9[98-1]='0';
  strcpy(entity_8, entity_9);
}