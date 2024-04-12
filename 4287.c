void fun()
{
  int entity_1 = 46;
  int entity_4 = 12;
  char entity_3[49] = "";
  entity_3 = NULL;
  char* entity_5;
  memset(entity_3, 'T', 49-1);
  entity_3[49-1]='';
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[entity_4-1]='';
  memcpy(entity_5, entity_3, 49*sizeof(char));
}