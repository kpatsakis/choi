void fun()
{
  int entity_6 = 73;
  char entity_8 = 'H';
  char entity_3[4] = "";
  char entity_1[41] = "";
  char entity_7[77] = "";
  char* entity_2;
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[0]='0';
  memset(entity_1, 'f', 41-1);
  entity_1[41-1]='0';
  memset(entity_3, 'h', 4-1);
  entity_3[4-1]='0';
  memset(entity_7, 'u', 77-1);
  entity_7[77-1]='0';
  memcpy(entity_2, entity_3, 4*sizeof(char));
}