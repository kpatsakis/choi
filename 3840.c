void fun()
{
  int entity_7 = 43;
  char* entity_1;
  char entity_0[30] = "";
  entity_0 = NULL;
  entity_1 = (char*)malloc(entity_7*sizeof(char));
  entity_1[entity_7-1]='';
  memset(entity_0, 'W', 30-1);
  entity_0[30-1]='';
  memcpy(entity_1, entity_0, 30*sizeof(char));
}