void fun()
{
  int entity_8 = 54;
  int entity_4 = 63;
  char entity_5[entity_4] = "";
  char* entity_7;
  entity_7 = (char*)malloc(71*sizeof(char));
  entity_7[0]='0';
  memset(entity_5, 'n', entity_4-1);
  entity_5[entity_4-1]='0';
  entity_4 = 96;
  strcpy(entity_7, entity_5);
}