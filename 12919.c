void fun()
{
  int entity_3 = 97;
  int entity_1 = 43;
  char* entity_0;
  char entity_5[entity_1] = "";
  entity_0 = (char*)malloc(64*sizeof(char));
  entity_0[0]='0';
  memset(entity_5, 'e', entity_1-1);
  entity_5[entity_1-1]='0';
  strcpy(entity_0, entity_5);
}