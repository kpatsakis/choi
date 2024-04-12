void fun()
{
  int entity_7 = 57;
  entity_7 = 54;
  char* entity_0;
  char entity_1[36] = "";
  entity_1 = NULL;
  memset(entity_1, 'f', 36-1);
  entity_1[36-1]='';
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[entity_7-1]='';
  memcpy(entity_0, entity_1, 36*sizeof(char));
}