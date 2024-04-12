void fun()
{
  int entity_5 = 62;
  int entity_8 = 98;
  entity_8 = 98;
  char entity_6[entity_8] = "";
  char* entity_0;
  memset(entity_6, 'V', entity_8-1);
  entity_6[entity_8-1]='0';
  entity_0 = (char*)malloc(23*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_6);
}