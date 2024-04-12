void fun()
{
  int entity_0 = 1;
  int entity_8 = 16;
  char* entity_6;
  char entity_9[24] = "";
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[0]='0';
  memset(entity_9, 'x', 24-1);
  entity_9[24-1]='0';
  strcpy(entity_6, entity_9);
}