void fun()
{
  int entity_7 = 66;
  int entity_5 = 50;
  entity_5 = 96;
  char* entity_9;
  char entity_3[33] = "";
  char entity_8[50] = "";
  memset(entity_8, 'X', 50-1);
  entity_8[50-1]='0';
  memset(entity_3, 'y', 33-1);
  entity_3[33-1]='0';
  entity_9 = (char*)malloc(entity_5*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_8);
}