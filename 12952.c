void fun()
{
  int entity_7 = 70;
  char entity_0[entity_7] = "";
  char* entity_5;
  memset(entity_0, 'n', entity_7-1);
  entity_0[entity_7-1]='0';
  entity_5 = (char*)malloc(20*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_0);
}