void fun()
{
  int entity_8 = 71;
  entity_8 = 94;
  char entity_5[entity_8] = "";
  entity_5 = NULL;
  char* entity_1;
  memset(entity_5, 'A', entity_8-1);
  entity_5[entity_8-1]='';
  entity_1 = (char*)malloc(8*sizeof(char));
  entity_1[8-1]='';
  memcpy(entity_1, entity_5, entity_8*sizeof(char));
}