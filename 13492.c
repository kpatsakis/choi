void fun()
{
  int entity_2 = 42;
  entity_2 = 42;
  char entity_7 = 'x';
  char* entity_0;
  char entity_8[entity_2] = "";
  memset(entity_8, 'D', entity_2-1);
  entity_8[entity_2-1]='0';
  entity_0 = (char*)malloc(16*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_8);
}