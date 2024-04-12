void fun()
{
  int entity_5 = 25;
  entity_5 = 96;
  char entity_8[12] = "";
  entity_8 = NULL;
  char* entity_2;
  memset(entity_8, 'J', 12-1);
  entity_8[12-1]='';
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[entity_5-1]='';
  strcpy(entity_2, entity_8);
}