void fun()
{
  int entity_4 = 78;
  int entity_7 = 34;
  int entity_1 = 11;
  char entity_3[90] = "";
  char* entity_0;
  char entity_8[entity_1] = "";
  entity_0 = (char*)malloc(55*sizeof(char));
  entity_0[0]='0';
  memset(entity_3, 'y', 90-1);
  entity_3[90-1]='0';
  memset(entity_8, 'p', entity_1-1);
  entity_8[entity_1-1]='0';
  strcpy(entity_0, entity_8);
}