void fun()
{
  int entity_0 = 27;
  char entity_4[26] = "";
  char* entity_6;
  char entity_5[entity_0] = "";
  char* entity_8;
  memset(entity_4, 'O', 26-1);
  entity_4[26-1]='0';
  memset(entity_5, 'S', entity_0-1);
  entity_5[entity_0-1]='0';
  entity_6 = (char*)malloc(34*sizeof(char));
  entity_6[0]='0';
  entity_8 = (char*)malloc(98*sizeof(char));
  entity_8[0]='0';
  entity_0 = 73;
  strcpy(entity_6, entity_5);
}