void fun()
{
  int entity_4 = 41;
  char* entity_7;
  char entity_1[entity_4] = "";
  entity_1 = NULL;
  entity_7 = (char*)malloc(38*sizeof(char));
  entity_7[38-1]='';
  memset(entity_1, 'S', entity_4-1);
  entity_1[entity_4-1]='';
  memcpy(entity_7, entity_1, entity_4*sizeof(char));
}