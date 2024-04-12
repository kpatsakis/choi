void fun()
{
  int entity_2 = 45;
  int entity_8 = 78;
  char* entity_0;
  char entity_1[entity_8] = "";
  memset(entity_1, 'u', entity_8-1);
  entity_1[entity_8-1]='0';
  entity_0 = (char*)malloc(98*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_1);
}