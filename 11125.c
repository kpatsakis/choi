void fun()
{
  char* entity_1;
  char entity_8[53] = "";
  char entity_4[79] = "";
  memset(entity_4, 'h', 79-1);
  entity_4[79-1]='0';
  memset(entity_8, 'N', 53-1);
  entity_8[53-1]='0';
  entity_1 = (char*)malloc(52*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_4, 79*sizeof(char));
}