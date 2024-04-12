void fun()
{
  char entity_7[15] = "";
  char entity_1[84] = "";
  char* entity_5;
  char entity_6[53] = "";
  memset(entity_7, 'u', 15-1);
  entity_7[15-1]='0';
  memset(entity_1, 'h', 84-1);
  entity_1[84-1]='0';
  memset(entity_6, 'x', 53-1);
  entity_6[53-1]='0';
  entity_5 = (char*)malloc(92*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_1, 84*sizeof(char));
}