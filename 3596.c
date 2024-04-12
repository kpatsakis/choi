void fun()
{
  int entity_6 = 29;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(4*sizeof(char));
  entity_4[4-1]='';
  memset(entity_1, 'z', entity_6-1);
  entity_1[entity_6-1]='';
  entity_6 = 11;
  memcpy(entity_4, entity_1, entity_6*sizeof(char));
}