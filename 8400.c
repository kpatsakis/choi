void fun()
{
  int entity_3 = 97;
  char* entity_6;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  char entity_5 = 'X';
  entity_6 = (char*)malloc(78*sizeof(char));
  entity_6[78-1]='';
  memset(entity_8, 'x', entity_3-1);
  entity_8[entity_3-1]='';
  strcpy(entity_6, entity_8);
}