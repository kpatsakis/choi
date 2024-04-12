void fun()
{
  char entity_8[13] = "";
  char* entity_4;
  char entity_7[44] = "";
  entity_4 = (char*)malloc(40*sizeof(char));
  entity_4[0]='0';
  memset(entity_7, 's', 44-1);
  entity_7[44-1]='0';
  memset(entity_8, 'G', 13-1);
  entity_8[13-1]='0';
  entity_7[15] = 'z';
}