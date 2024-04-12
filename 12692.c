void fun()
{
  int entity_4 = 7;
  char entity_6[20] = "";
  char entity_9[39] = "";
  char* entity_3;
  char entity_7 = 'r';
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[0]='0';
  memset(entity_6, 'A', 20-1);
  entity_6[20-1]='0';
  memset(entity_9, 'G', 39-1);
  entity_9[39-1]='0';
  strcpy(entity_3, entity_9);
}