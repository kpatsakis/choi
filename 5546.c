void fun()
{
  int entity_4 = 86;
  char* entity_1;
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  memset(entity_3, 'y', entity_4-1);
  entity_3[entity_4-1]='';
  entity_1 = (char*)malloc(81*sizeof(char));
  entity_1[81-1]='';
  memcpy(entity_1, entity_3, entity_4*sizeof(char));
}