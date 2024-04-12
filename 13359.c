void fun()
{
  int entity_8 = 54;
  char entity_6[entity_8] = "";
  char entity_1 = 'q';
  char* entity_4;
  entity_4 = (char*)malloc(78*sizeof(char));
  entity_4[0]='0';
  memset(entity_6, 'W', entity_8-1);
  entity_6[entity_8-1]='0';
  entity_8 = 95;
  strcpy(entity_4, entity_6);
}