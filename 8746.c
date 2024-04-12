void fun()
{
  int entity_4 = 28;
  int entity_3 = 31;
  char* entity_5;
  char entity_0 = 'i';
  char entity_8[entity_4] = "";
  entity_8 = NULL;
  entity_5 = (char*)malloc(89*sizeof(char));
  entity_5[89-1]='';
  memset(entity_8, 'V', entity_4-1);
  entity_8[entity_4-1]='';
  entity_4 = 72;
  memcpy(entity_5, entity_8, entity_4*sizeof(char));
}