void fun()
{
  int entity_4 = 58;
  entity_4 = 23;
  char* entity_6;
  char entity_1[entity_4] = "";
  entity_1 = NULL;
  entity_6 = (char*)malloc(19*sizeof(char));
  entity_6[19-1]='';
  memset(entity_1, 'K', entity_4-1);
  entity_1[entity_4-1]='';
  memcpy(entity_6, entity_1, entity_4*sizeof(char));
}