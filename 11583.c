void fun()
{
  int entity_8 = 21;
  char* entity_1;
  char entity_4[13] = "";
  char entity_9[55] = "";
  entity_1 = (char*)malloc(56*sizeof(char));
  entity_1[0]='0';
  memset(entity_4, 'x', 13-1);
  entity_4[13-1]='0';
  memset(entity_9, 'z', 55-1);
  entity_9[55-1]='0';
  strcpy(entity_1, entity_9);
}