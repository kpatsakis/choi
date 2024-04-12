void fun()
{
  int entity_8 = 41;
  char* entity_2;
  char entity_6[12] = "";
  char entity_4[46] = "";
  char entity_3 = 'T';
  memset(entity_4, 'T', 46-1);
  entity_4[46-1]='0';
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[0]='0';
  memset(entity_6, 'E', 12-1);
  entity_6[12-1]='0';
  memcpy(entity_2, entity_6, 12*sizeof(char));
}