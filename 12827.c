void fun()
{
  int entity_0 = 71;
  char entity_5[72] = "";
  char* entity_2;
  char entity_8[4] = "";
  char entity_1 = 'v';
  memset(entity_5, 'P', 72-1);
  entity_5[72-1]='0';
  memset(entity_8, 'g', 4-1);
  entity_8[4-1]='0';
  entity_2 = (char*)malloc(entity_0*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_5);
}