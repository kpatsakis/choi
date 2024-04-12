void fun()
{
  int entity_9 = 11;
  char* entity_6;
  char entity_8[39] = "";
  memset(entity_8, 'E', 39-1);
  entity_8[39-1]='0';
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[0]='0';
  entity_9 = 65;
  strcpy(entity_6, entity_8);
}