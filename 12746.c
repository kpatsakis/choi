void fun()
{
  int entity_7 = 91;
  char* entity_3;
  char entity_9[15] = "";
  char entity_8[96] = "";
  memset(entity_9, 'X', 15-1);
  entity_9[15-1]='0';
  entity_3 = (char*)malloc(entity_7*sizeof(char));
  entity_3[0]='0';
  memset(entity_8, 'A', 96-1);
  entity_8[96-1]='0';
  strcpy(entity_3, entity_9);
}