void fun()
{
  int entity_8 = 100;
  entity_8 = 100;
  char* entity_6;
  char entity_1[entity_8] = "";
  entity_6 = (char*)malloc(30*sizeof(char));
  entity_6[0]='0';
  memset(entity_1, 'h', entity_8-1);
  entity_1[entity_8-1]='0';
  strcpy(entity_6, entity_1);
}