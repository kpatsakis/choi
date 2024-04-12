void fun()
{
  char* entity_7;
  char entity_5[64] = "";
  char entity_4[24] = "";
  memset(entity_5, 'q', 64-1);
  entity_5[64-1]='0';
  memset(entity_4, 'o', 24-1);
  entity_4[24-1]='0';
  entity_7 = (char*)malloc(83*sizeof(char));
  entity_7[0]='0';
  entity_5[76] = 'e';
}