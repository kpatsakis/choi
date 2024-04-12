void fun()
{
  char* entity_0;
  char entity_5 = 'i';
  char entity_4 = 'q';
  char entity_6[98] = "";
  entity_0 = (char*)malloc(34*sizeof(char));
  entity_0[0]='0';
  memset(entity_6, 'x', 98-1);
  entity_6[98-1]='0';
  memcpy(entity_0, entity_6, 98*sizeof(char));
}