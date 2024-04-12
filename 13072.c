void fun()
{
  int entity_8 = 84;
  int entity_4 = 29;
  entity_8 = 12;
  char entity_3[25] = "";
  char* entity_2;
  char entity_1[76] = "";
  char entity_0[41] = "";
  memset(entity_3, 'I', 25-1);
  entity_3[25-1]='0';
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[0]='0';
  memset(entity_0, 'C', 41-1);
  entity_0[41-1]='0';
  memset(entity_1, 'd', 76-1);
  entity_1[76-1]='0';
  memcpy(entity_2, entity_0, 41*sizeof(char));
}