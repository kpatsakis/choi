void fun()
{
  int entity_2 = 65;
  char* entity_8;
  char entity_5[23] = "";
  char entity_1[17] = "";
  char* entity_6;
  memset(entity_5, 'e', 23-1);
  entity_5[23-1]='0';
  memset(entity_1, 'K', 17-1);
  entity_1[17-1]='0';
  entity_6 = (char*)malloc(38*sizeof(char));
  entity_6[0]='0';
  entity_8 = (char*)malloc(entity_2*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_5, 23*sizeof(char));
}