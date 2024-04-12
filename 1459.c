void fun()
{
  int entity_2 = 33;
  int entity_8 = 33;
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  char* entity_0;
  memset(entity_5, 'S', entity_2-1);
  entity_5[entity_2-1]='';
  entity_0 = (char*)malloc(33*sizeof(char));
  entity_0[33-1]='';
  memcpy(entity_0, entity_5, entity_2*sizeof(char));
}