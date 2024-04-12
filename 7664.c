void fun()
{
  int entity_3 = 33;
  entity_3 = 91;
  char* entity_1;
  char entity_4[entity_3] = "";
  entity_4 = NULL;
  memset(entity_4, 'k', entity_3-1);
  entity_4[entity_3-1]='';
  entity_1 = (char*)malloc(37*sizeof(char));
  entity_1[37-1]='';
  memcpy(entity_1, entity_4, entity_3*sizeof(char));
}