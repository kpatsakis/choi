void fun()
{
  int entity_3 = 57;
  char* entity_5;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  memset(entity_8, 'r', entity_3-1);
  entity_8[entity_3-1]='';
  entity_5 = (char*)malloc(55*sizeof(char));
  entity_5[55-1]='';
  memcpy(entity_5, entity_8, entity_3*sizeof(char));
}