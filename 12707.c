void fun()
{
  int entity_9 = 49;
  int entity_2 = 34;
  char entity_4[3] = "";
  char* entity_8;
  char entity_3[32] = "";
  memset(entity_4, 'O', 3-1);
  entity_4[3-1]='0';
  memset(entity_3, 'k', 32-1);
  entity_3[32-1]='0';
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_4);
}