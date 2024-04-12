void fun()
{
  char entity_7[2] = "";
  char entity_5[64] = "";
  char* entity_4;
  entity_4 = (char*)malloc(43*sizeof(char));
  entity_4[0]='0';
  memset(entity_7, 'h', 2-1);
  entity_7[2-1]='0';
  memset(entity_5, 'e', 64-1);
  entity_5[64-1]='0';
  memcpy(entity_4, entity_5, 64*sizeof(char));
}