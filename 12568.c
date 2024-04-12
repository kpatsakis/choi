void fun()
{
  int entity_5 = 26;
  char* entity_2;
  char entity_4[entity_5] = "";
  char entity_8[77] = "";
  entity_2 = (char*)malloc(23*sizeof(char));
  entity_2[0]='0';
  memset(entity_8, 'X', 77-1);
  entity_8[77-1]='0';
  memset(entity_4, 'T', entity_5-1);
  entity_4[entity_5-1]='0';
  strcpy(entity_2, entity_4);
}