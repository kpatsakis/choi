void fun()
{
  int entity_4 = 35;
  char* entity_1;
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  entity_1 = (char*)malloc(49*sizeof(char));
  entity_1[49-1]='';
  memset(entity_6, 'P', entity_4-1);
  entity_6[entity_4-1]='';
  memcpy(entity_1, entity_6, entity_4*sizeof(char));
}