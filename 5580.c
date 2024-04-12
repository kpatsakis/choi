void fun()
{
  int entity_8 = 93;
  char* entity_6;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  entity_6 = (char*)malloc(86*sizeof(char));
  entity_6[86-1]='';
  memset(entity_1, 'N', entity_8-1);
  entity_1[entity_8-1]='';
  entity_8 = 98;
  memcpy(entity_6, entity_1, entity_8*sizeof(char));
}