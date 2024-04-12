void fun()
{
  char* entity_7;
  char entity_4[40] = "";
  memset(entity_4, 'D', 40-1);
  entity_4[40-1]='0';
  entity_7 = (char*)malloc(56*sizeof(char));
  entity_7[0]='0';
  entity_4[63] = 'm';
}