void fun()
{
  char entity_7 = 'R';
  char entity_9[83] = "";
  char entity_8[5] = "";
  char* entity_0;
  memset(entity_8, 'B', 5-1);
  entity_8[5-1]='0';
  entity_0 = (char*)malloc(61*sizeof(char));
  entity_0[0]='0';
  memset(entity_9, 'L', 83-1);
  entity_9[83-1]='0';
  strcpy(entity_0, entity_9);
}