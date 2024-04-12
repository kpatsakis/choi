void fun()
{
  int entity_0 = 52;
  char entity_3[72] = "";
  entity_3 = NULL;
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(33*sizeof(char));
  entity_5[33-1]='';
  memset(entity_1, 'F', entity_0-1);
  entity_1[entity_0-1]='';
  memset(entity_3, 'Z', 72-1);
  entity_3[72-1]='';
  memcpy(entity_5, entity_1, entity_0*sizeof(char));
}