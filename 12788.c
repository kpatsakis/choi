void fun()
{
  int entity_9 = 46;
  int entity_2 = 86;
  char* entity_8;
  char entity_1[29] = "";
  char entity_7 = 'p';
  char entity_6[20] = "";
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[0]='0';
  memset(entity_6, 'q', 20-1);
  entity_6[20-1]='0';
  memset(entity_1, 'n', 29-1);
  entity_1[29-1]='0';
  strcpy(entity_8, entity_6);
}