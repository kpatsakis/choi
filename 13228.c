void fun()
{
  int entity_0 = 99;
  char* entity_8;
  char entity_1[entity_0] = "";
  char* entity_6;
  entity_8 = (char*)malloc(9*sizeof(char));
  entity_8[0]='0';
  entity_6 = (char*)malloc(48*sizeof(char));
  entity_6[0]='0';
  memset(entity_1, 'J', entity_0-1);
  entity_1[entity_0-1]='0';
  entity_0 = 34;
  strcpy(entity_6, entity_1);
}