void fun()
{
  int entity_6 = 29;
  entity_6 = 29;
  char entity_0[entity_6] = "";
  char* entity_4;
  entity_4 = (char*)malloc(18*sizeof(char));
  entity_4[0]='0';
  memset(entity_0, 'A', entity_6-1);
  entity_0[entity_6-1]='0';
  strcpy(entity_4, entity_0);
}