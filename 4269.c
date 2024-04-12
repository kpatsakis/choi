void fun()
{
  int entity_4 = 51;
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(11*sizeof(char));
  entity_1[11-1]='';
  memset(entity_6, 'U', entity_4-1);
  entity_6[entity_4-1]='';
  memcpy(entity_1, entity_6, entity_4*sizeof(char));
}