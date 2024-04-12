void fun()
{
  int entity_6 = 99;
  char* entity_0;
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  entity_0 = (char*)malloc(79*sizeof(char));
  entity_0[79-1]='';
  memset(entity_5, 'y', entity_6-1);
  entity_5[entity_6-1]='';
  entity_6 = 40;
  memcpy(entity_0, entity_5, entity_6*sizeof(char));
}