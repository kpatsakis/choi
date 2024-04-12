void fun()
{
  int entity_0 = 99;
  int entity_3 = 76;
  char entity_4[entity_0] = "";
  char entity_1 = 'E';
  char* entity_5;
  char* entity_8;
  entity_8 = (char*)malloc(75*sizeof(char));
  entity_8[0]='0';
  entity_5 = (char*)malloc(51*sizeof(char));
  entity_5[0]='0';
  memset(entity_4, 'c', entity_0-1);
  entity_4[entity_0-1]='0';
  entity_0 = 18;
  strcpy(entity_8, entity_4);
}