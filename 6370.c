void fun()
{
  int entity_7 = 91;
  int entity_5 = 48;
  entity_5 = 6;
  char entity_3[entity_5] = "";
  entity_3 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(55*sizeof(char));
  entity_4[55-1]='';
  memset(entity_3, 'i', entity_5-1);
  entity_3[entity_5-1]='';
  memcpy(entity_4, entity_3, entity_5*sizeof(char));
}