void fun()
{
  int entity_8 = 26;
  char entity_6[entity_8] = "";
  char* entity_0;
  entity_0 = (char*)malloc(2*sizeof(char));
  entity_0[0]='0';
  memset(entity_6, 'T', entity_8-1);
  entity_6[entity_8-1]='0';
  strcpy(entity_0, entity_6);
}