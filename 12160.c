void fun()
{
  int entity_0 = 70;
  int entity_8 = 42;
  char entity_4[entity_0] = "";
  char* entity_3;
  memset(entity_4, 's', entity_0-1);
  entity_4[entity_0-1]='0';
  entity_3 = (char*)malloc(67*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_4);
}