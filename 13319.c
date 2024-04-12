void fun()
{
  int entity_7 = 43;
  char* entity_1;
  char entity_9[91] = "";
  char entity_8 = 'Z';
  entity_1 = (char*)malloc(entity_7*sizeof(char));
  entity_1[0]='0';
  memset(entity_9, 'B', 91-1);
  entity_9[91-1]='0';
  entity_7 = 64;
  strcpy(entity_1, entity_9);
}