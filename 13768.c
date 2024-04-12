void fun()
{
  int entity_6 = 48;
  entity_6 = 48;
  char entity_2[entity_6] = "";
  char* entity_8;
  char entity_4[54] = "";
  entity_8 = (char*)malloc(19*sizeof(char));
  entity_8[0]='0';
  memset(entity_4, 'W', 54-1);
  entity_4[54-1]='0';
  memset(entity_2, 'k', entity_6-1);
  entity_2[entity_6-1]='0';
  strcpy(entity_8, entity_2);
}