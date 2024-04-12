void fun()
{
  char entity_1 = 'm';
  char* entity_6;
  char entity_4[37] = "";
  entity_6 = (char*)malloc(16*sizeof(char));
  entity_6[0]='0';
  memset(entity_4, 't', 37-1);
  entity_4[37-1]='0';
  entity_4[83] = 'u';
}