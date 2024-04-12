void fun()
{
  int entity_1 = 7;
  entity_1 = 87;
  char* entity_6;
  char entity_8[entity_1] = "";
  entity_8 = NULL;
  entity_6 = (char*)malloc(89*sizeof(char));
  entity_6[89-1]='';
  memset(entity_8, 'b', entity_1-1);
  entity_8[entity_1-1]='';
  memcpy(entity_6, entity_8, entity_1*sizeof(char));
}