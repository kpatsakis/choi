void fun()
{
  int entity_8 = 8;
  char entity_1[20] = "";
  char* entity_4;
  entity_4 = (char*)malloc(89*sizeof(char));
  entity_4[0]='0';
  memset(entity_1, 'x', 20-1);
  entity_1[20-1]='0';
  strcpy(entity_4, entity_1);
}