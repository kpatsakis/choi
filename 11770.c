void fun()
{
  char entity_0[57] = "";
  char* entity_8;
  char entity_4[24] = "";
  memset(entity_0, 'v', 57-1);
  entity_0[57-1]='0';
  entity_8 = (char*)malloc(14*sizeof(char));
  entity_8[0]='0';
  memset(entity_4, 'e', 24-1);
  entity_4[24-1]='0';
  memcpy(entity_8, entity_0, 57*sizeof(char));
}