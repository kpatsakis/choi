void fun()
{
  int entity_9 = 53;
  int entity_8 = 41;
  entity_9 = 88;
  char entity_4[71] = "";
  char* entity_2;
  char entity_0[11] = "";
  memset(entity_4, 'z', 71-1);
  entity_4[71-1]='0';
  entity_2 = (char*)malloc(entity_9*sizeof(char));
  entity_2[0]='0';
  memset(entity_0, 'O', 11-1);
  entity_0[11-1]='0';
  strcpy(entity_2, entity_0);
}