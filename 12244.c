void fun()
{
  int entity_9 = 94;
  char entity_1[65] = "";
  char entity_0 = 'W';
  char* entity_4;
  char entity_2[37] = "";
  memset(entity_2, 'B', 37-1);
  entity_2[37-1]='0';
  memset(entity_1, 'l', 65-1);
  entity_1[65-1]='0';
  entity_4 = (char*)malloc(entity_9*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_2);
}