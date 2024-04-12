void fun()
{
  int entity_1 = 10;
  char entity_4[51] = "";
  char* entity_9;
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[0]='0';
  memset(entity_4, 'K', 51-1);
  entity_4[51-1]='0';
  strcpy(entity_9, entity_4);
}