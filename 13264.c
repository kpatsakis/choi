void fun()
{
  int entity_1 = 49;
  int entity_0 = 88;
  char* entity_5;
  char entity_8[entity_0] = "";
  char entity_2 = 'l';
  memset(entity_8, 'n', entity_0-1);
  entity_8[entity_0-1]='0';
  entity_5 = (char*)malloc(70*sizeof(char));
  entity_5[0]='0';
  entity_0 = 25;
  memcpy(entity_5, entity_8, entity_0*sizeof(char));
}