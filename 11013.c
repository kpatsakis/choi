void fun()
{
  char entity_8[25] = "";
  char* entity_9;
  memset(entity_8, 'J', 25-1);
  entity_8[25-1]='0';
  entity_9 = (char*)malloc(88*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_8);
}