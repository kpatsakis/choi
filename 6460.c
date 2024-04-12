void fun()
{
  int entity_8 = 31;
  entity_8 = 68;
  char* entity_5;
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  memset(entity_3, 'c', entity_8-1);
  entity_3[entity_8-1]='';
  entity_5 = (char*)malloc(15*sizeof(char));
  entity_5[15-1]='';
  memcpy(entity_5, entity_3, entity_8*sizeof(char));
}