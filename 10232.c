void fun()
{
  char entity_3[93] = "";
  char* entity_6;
  char entity_5[26] = "";
  char entity_4 = 'P';
  memset(entity_5, 'Z', 26-1);
  entity_5[26-1]='0';
  memset(entity_3, 'x', 93-1);
  entity_3[93-1]='0';
  entity_6 = (char*)malloc(59*sizeof(char));
  entity_6[0]='0';
  entity_3[4] = 'Y';
}