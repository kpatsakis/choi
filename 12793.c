void fun()
{
  int entity_1 = 40;
  int entity_8 = 12;
  char entity_0[entity_1] = "";
  char* entity_5;
  memset(entity_0, 'Y', entity_1-1);
  entity_0[entity_1-1]='0';
  entity_5 = (char*)malloc(96*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_0);
}