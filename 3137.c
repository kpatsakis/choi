void fun()
{
  int entity_3 = 20;
  char* entity_4;
  char entity_5 = 'J';
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  entity_4 = (char*)malloc(53*sizeof(char));
  entity_4[53-1]='';
  memset(entity_8, 'b', entity_3-1);
  entity_8[entity_3-1]='';
  strcpy(entity_4, entity_8);
}