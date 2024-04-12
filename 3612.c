void fun()
{
  int entity_4 = 98;
  int entity_5 = 93;
  char* entity_2;
  char entity_8[entity_4] = "";
  entity_8 = NULL;
  memset(entity_8, 'n', entity_4-1);
  entity_8[entity_4-1]='';
  entity_2 = (char*)malloc(17*sizeof(char));
  entity_2[17-1]='';
  entity_4 = 88;
  strcpy(entity_2, entity_8);
}