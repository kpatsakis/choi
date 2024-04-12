void fun()
{
  int entity_0 = 18;
  int entity_6 = 42;
  char* entity_1;
  char entity_5[entity_6] = "";
  entity_1 = (char*)malloc(61*sizeof(char));
  entity_1[0]='0';
  memset(entity_5, 'i', entity_6-1);
  entity_5[entity_6-1]='0';
  strcpy(entity_1, entity_5);
}