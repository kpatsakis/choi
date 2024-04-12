void fun()
{
  int entity_5 = 29;
  int entity_8 = 31;
  char* entity_4;
  char entity_6[65] = "";
  char entity_9[10] = "";
  entity_4 = (char*)malloc(44*sizeof(char));
  entity_4[0]='0';
  memset(entity_6, 'z', 65-1);
  entity_6[65-1]='0';
  memset(entity_9, 'U', 10-1);
  entity_9[10-1]='0';
  strcpy(entity_4, entity_9);
}