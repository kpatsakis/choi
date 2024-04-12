void fun()
{
  int entity_7 = 8;
  char entity_0[94] = "";
  char entity_2[4] = "";
  char* entity_5;
  memset(entity_0, 'l', 94-1);
  entity_0[94-1]='0';
  memset(entity_2, 'Q', 4-1);
  entity_2[4-1]='0';
  entity_5 = (char*)malloc(entity_7*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_2);
}