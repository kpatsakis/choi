void fun()
{
  int entity_5 = 49;
  entity_5 = 96;
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(86*sizeof(char));
  entity_3[86-1]='';
  memset(entity_8, 't', entity_5-1);
  entity_8[entity_5-1]='';
  memcpy(entity_3, entity_8, entity_5*sizeof(char));
}