void fun()
{
  char entity_3[53] = "";
  char entity_4[17] = "";
  char* entity_8;
  char entity_7[48] = "";
  char entity_2 = 'N';
  memset(entity_7, 'q', 48-1);
  entity_7[48-1]='0';
  memset(entity_3, 'e', 53-1);
  entity_3[53-1]='0';
  memset(entity_4, 'v', 17-1);
  entity_4[17-1]='0';
  entity_8 = (char*)malloc(60*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_4, 17*sizeof(char));
}