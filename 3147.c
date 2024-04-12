void fun()
{
  int entity_7 = 56;
  entity_7 = 14;
  char* entity_1;
  char entity_0[entity_7] = "";
  entity_0 = NULL;
  entity_1 = (char*)malloc(30*sizeof(char));
  entity_1[30-1]='';
  memset(entity_0, 's', entity_7-1);
  entity_0[entity_7-1]='';
  memcpy(entity_1, entity_0, entity_7*sizeof(char));
}