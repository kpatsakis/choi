void fun()
{
  int entity_5 = 15;
  char entity_9[40] = "";
  char entity_0[64] = "";
  char entity_2[68] = "";
  char* entity_8;
  memset(entity_0, 'Z', 64-1);
  entity_0[64-1]='0';
  entity_8 = (char*)malloc(96*sizeof(char));
  entity_8[0]='0';
  memset(entity_2, 'x', 68-1);
  entity_2[68-1]='0';
  memset(entity_9, 'u', 40-1);
  entity_9[40-1]='0';
  strcpy(entity_8, entity_9);
}