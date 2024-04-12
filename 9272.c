void fun()
{
  int entity_5 = 27;
  char* entity_0;
  char entity_6 = 'e';
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  memset(entity_1, 'x', entity_5-1);
  entity_1[entity_5-1]='';
  entity_0 = (char*)malloc(11*sizeof(char));
  entity_0[11-1]='';
  entity_5 = 70;
  memcpy(entity_0, entity_1, entity_5*sizeof(char));
}