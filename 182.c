void fun()
{
  int entity_6 = 60;
  char* entity_8;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  char entity_1[1] = "";
  entity_1 = NULL;
  memset(entity_4, 'P', entity_6-1);
  entity_4[entity_6-1]='';
  entity_8 = (char*)malloc(55*sizeof(char));
  entity_8[55-1]='';
  memset(entity_1, 'W', 1-1);
  entity_1[1-1]='';
  memcpy(entity_8, entity_4, entity_6*sizeof(char));
}