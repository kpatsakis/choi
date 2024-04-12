void fun()
{
  int entity_0 = 50;
  char entity_4[entity_0] = "";
  char entity_2 = 'y';
  char* entity_8;
  char* entity_3;
  entity_8 = (char*)malloc(39*sizeof(char));
  entity_8[0]='0';
  memset(entity_4, 'U', entity_0-1);
  entity_4[entity_0-1]='0';
  entity_3 = (char*)malloc(44*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_4);
}