void fun()
{
  char* entity_4;
  char entity_3[65] = "";
  char* entity_8;
  char entity_1[22] = "";
  entity_8 = (char*)malloc(51*sizeof(char));
  entity_8[0]='0';
  entity_4 = (char*)malloc(98*sizeof(char));
  entity_4[0]='0';
  memset(entity_1, 'v', 22-1);
  entity_1[22-1]='0';
  memset(entity_3, 'V', 65-1);
  entity_3[65-1]='0';
  memcpy(entity_4, entity_1, 22*sizeof(char));
}