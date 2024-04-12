void fun()
{
  int entity_1 = 55;
  char* entity_0;
  char entity_6[entity_1] = "";
  entity_0 = (char*)malloc(62*sizeof(char));
  entity_0[0]='0';
  memset(entity_6, 'h', entity_1-1);
  entity_6[entity_1-1]='0';
  entity_1 = 33;
  strcpy(entity_0, entity_6);
}