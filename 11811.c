void fun()
{
  int entity_8 = 30;
  char entity_7 = 'o';
  char entity_1[96] = "";
  char entity_6[28] = "";
  char* entity_9;
  memset(entity_6, 'z', 28-1);
  entity_6[28-1]='0';
  memset(entity_1, 'd', 96-1);
  entity_1[96-1]='0';
  entity_9 = (char*)malloc(44*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_6);
}