void fun()
{
  char entity_6[41] = "";
  char entity_5 = 'c';
  char* entity_3;
  entity_3 = (char*)malloc(26*sizeof(char));
  entity_3[0]='0';
  memset(entity_6, 'x', 41-1);
  entity_6[41-1]='0';
  strcpy(entity_3, entity_6);
}