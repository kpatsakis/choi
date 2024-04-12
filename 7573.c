void fun()
{
  int entity_5 = 67;
  char* entity_3;
  char entity_1[49] = "";
  entity_1 = NULL;
  memset(entity_1, 'q', 49-1);
  entity_1[49-1]='';
  entity_3 = (char*)malloc(entity_5*sizeof(char));
  entity_3[entity_5-1]='';
  entity_5 = 81;
  memcpy(entity_3, entity_1, 49*sizeof(char));
}