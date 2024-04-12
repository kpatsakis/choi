void fun()
{
  int entity_6 = 41;
  char entity_3[entity_6] = "";
  entity_3 = NULL;
  char entity_0 = 'v';
  char* entity_1;
  memset(entity_3, 'v', entity_6-1);
  entity_3[entity_6-1]='';
  entity_1 = (char*)malloc(4*sizeof(char));
  entity_1[4-1]='';
  memcpy(entity_1, entity_3, entity_6*sizeof(char));
}