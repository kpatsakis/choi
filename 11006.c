void fun()
{
  char entity_6[31] = "";
  char* entity_4;
  char entity_3[91] = "";
  memset(entity_3, 'l', 91-1);
  entity_3[91-1]='0';
  memset(entity_6, 'C', 31-1);
  entity_6[31-1]='0';
  entity_4 = (char*)malloc(97*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_3, 91*sizeof(char));
}