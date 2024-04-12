void fun()
{
  int entity_7 = 55;
  int entity_5 = 86;
  entity_5 = 61;
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  char* entity_1;
  memset(entity_8, 'z', entity_5-1);
  entity_8[entity_5-1]='';
  entity_1 = (char*)malloc(86*sizeof(char));
  entity_1[86-1]='';
  memcpy(entity_1, entity_8, entity_5*sizeof(char));
}