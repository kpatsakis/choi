void fun()
{
  int entity_1 = 98;
  entity_1 = 69;
  char* entity_5;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  memset(entity_3, 'U', entity_1-1);
  entity_3[entity_1-1]='';
  entity_5 = (char*)malloc(89*sizeof(char));
  entity_5[89-1]='';
  memcpy(entity_5, entity_3, entity_1*sizeof(char));
}