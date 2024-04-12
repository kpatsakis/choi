void fun()
{
  int entity_6 = 33;
  char entity_7[entity_6] = "";
  entity_7 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(10*sizeof(char));
  entity_0[10-1]='';
  memset(entity_7, 'A', entity_6-1);
  entity_7[entity_6-1]='';
  memcpy(entity_0, entity_7, entity_6*sizeof(char));
}