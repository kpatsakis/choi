void fun()
{
  int entity_4 = 54;
  int entity_7 = 53;
  char* entity_8;
  char entity_3[entity_7] = "";
  memset(entity_3, 'l', entity_7-1);
  entity_3[entity_7-1]='0';
  entity_8 = (char*)malloc(7*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_3);
}