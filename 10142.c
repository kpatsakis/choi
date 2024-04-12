void fun()
{
  char entity_7[56] = "";
  char* entity_6;
  char entity_1[21] = "";
  memset(entity_7, 'm', 56-1);
  entity_7[56-1]='0';
  memset(entity_1, 'B', 21-1);
  entity_1[21-1]='0';
  entity_6 = (char*)malloc(24*sizeof(char));
  entity_6[0]='0';
  entity_7[37] = 'P';
}