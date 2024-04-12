void fun()
{
  int entity_8 = 91;
  char entity_2[22] = "";
  char* entity_6;
  char entity_0[55] = "";
  char entity_5[5] = "";
  char entity_7[4] = "";
  memset(entity_0, 'G', 55-1);
  entity_0[55-1]='0';
  memset(entity_7, 'y', 4-1);
  entity_7[4-1]='0';
  memset(entity_5, 'i', 5-1);
  entity_5[5-1]='0';
  memset(entity_2, 'j', 22-1);
  entity_2[22-1]='0';
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[0]='0';
  entity_8 = 21;
  strcpy(entity_6, entity_0);
}