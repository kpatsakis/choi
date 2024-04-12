void fun()
{
  int entity_3 = 49;
  char entity_8[86] = "";
  entity_8 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(entity_3*sizeof(char));
  entity_1[entity_3-1]='';
  memset(entity_8, 'D', 86-1);
  entity_8[86-1]='';
  memcpy(entity_1, entity_8, 86*sizeof(char));
}