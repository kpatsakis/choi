void fun()
{
  int entity_3 = 5;
  char* entity_0;
  char entity_4[entity_3] = "";
  entity_4 = NULL;
  memset(entity_4, 'S', entity_3-1);
  entity_4[entity_3-1]='';
  entity_0 = (char*)malloc(58*sizeof(char));
  entity_0[58-1]='';
  memcpy(entity_0, entity_4, entity_3*sizeof(char));
}