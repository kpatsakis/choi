void fun()
{
  int entity_5 = 61;
  char entity_6[entity_5] = "";
  entity_6 = NULL;
  char* entity_1;
  char* entity_8;
  memset(entity_6, 'x', entity_5-1);
  entity_6[entity_5-1]='';
  entity_8 = (char*)malloc(55*sizeof(char));
  entity_8[55-1]='';
  entity_1 = (char*)malloc(7*sizeof(char));
  entity_1[7-1]='';
  memcpy(entity_1, entity_6, entity_5*sizeof(char));
}