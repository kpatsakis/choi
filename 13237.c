void fun()
{
  int entity_2 = 30;
  int entity_1 = 89;
  entity_1 = 89;
  char entity_0[entity_1] = "";
  char* entity_8;
  memset(entity_0, 'l', entity_1-1);
  entity_0[entity_1-1]='0';
  entity_8 = (char*)malloc(4*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_0);
}