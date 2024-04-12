void fun()
{
  int entity_8 = 79;
  entity_8 = 9;
  char* entity_1;
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  memset(entity_3, 'N', entity_8-1);
  entity_3[entity_8-1]='';
  entity_1 = (char*)malloc(55*sizeof(char));
  entity_1[55-1]='';
  memcpy(entity_1, entity_3, entity_8*sizeof(char));
}