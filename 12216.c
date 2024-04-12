void fun()
{
  int entity_6 = 46;
  char* entity_8;
  char entity_1[entity_6] = "";
  char entity_0[76] = "";
  memset(entity_0, 'I', 76-1);
  entity_0[76-1]='0';
  entity_8 = (char*)malloc(26*sizeof(char));
  entity_8[0]='0';
  memset(entity_1, 'e', entity_6-1);
  entity_1[entity_6-1]='0';
  strcpy(entity_8, entity_1);
}