void fun()
{
  int entity_0 = 14;
  entity_0 = 79;
  char entity_5[77] = "";
  char* entity_8;
  char entity_2[53] = "";
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[0]='0';
  memset(entity_5, 'P', 77-1);
  entity_5[77-1]='0';
  memset(entity_2, 'Z', 53-1);
  entity_2[53-1]='0';
  strcpy(entity_8, entity_5);
}