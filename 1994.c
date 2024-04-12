void fun()
{
  int entity_7 = 42;
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  char* entity_8;
  memset(entity_6, 'o', entity_7-1);
  entity_6[entity_7-1]='';
  entity_8 = (char*)malloc(89*sizeof(char));
  entity_8[89-1]='';
  entity_7 = 15;
  memcpy(entity_8, entity_6, entity_7*sizeof(char));
}