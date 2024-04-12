void fun()
{
  int entity_0 = 33;
  char entity_4[entity_0] = "";
  char* entity_5;
  memset(entity_4, 'x', entity_0-1);
  entity_4[entity_0-1]='0';
  entity_5 = (char*)malloc(87*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_4);
}