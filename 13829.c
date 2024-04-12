void fun()
{
  int entity_4 = 86;
  entity_4 = 86;
  char* entity_1;
  char entity_8[entity_4] = "";
  memset(entity_8, 'j', entity_4-1);
  entity_8[entity_4-1]='0';
  entity_1 = (char*)malloc(14*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_8);
}