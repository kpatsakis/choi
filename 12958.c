void fun()
{
  int entity_7 = 20;
  char* entity_6;
  char entity_9[20] = "";
  entity_6 = (char*)malloc(entity_7*sizeof(char));
  entity_6[0]='0';
  memset(entity_9, 'K', 20-1);
  entity_9[20-1]='0';
  strcpy(entity_6, entity_9);
}