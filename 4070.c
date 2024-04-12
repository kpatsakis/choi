void fun()
{
  int entity_7 = 79;
  int entity_4 = 14;
  char entity_8[entity_4] = "";
  entity_8 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(74*sizeof(char));
  entity_1[74-1]='';
  memset(entity_8, 'Q', entity_4-1);
  entity_8[entity_4-1]='';
  entity_4 = 55;
  memcpy(entity_1, entity_8, entity_4*sizeof(char));
}