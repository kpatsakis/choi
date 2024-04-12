void fun()
{
  int entity_3 = 50;
  char entity_0[93] = "";
  entity_0 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(entity_3*sizeof(char));
  entity_1[entity_3-1]='';
  memset(entity_0, 'M', 93-1);
  entity_0[93-1]='';
  entity_3 = 32;
  memcpy(entity_1, entity_0, 93*sizeof(char));
}