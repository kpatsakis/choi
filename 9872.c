void fun()
{
  int entity_3 = 72;
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(75*sizeof(char));
  entity_1[75-1]='';
  memset(entity_0, 'M', entity_3-1);
  entity_0[entity_3-1]='';
  entity_3 = 35;
  memcpy(entity_1, entity_0, entity_3*sizeof(char));
}