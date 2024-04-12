void fun()
{
  int entity_5 = 54;
  char entity_2[entity_5] = "";
  char* entity_8;
  entity_8 = (char*)malloc(9*sizeof(char));
  entity_8[0]='0';
  memset(entity_2, 'Y', entity_5-1);
  entity_2[entity_5-1]='0';
  strcpy(entity_8, entity_2);
}