void fun()
{
  int entity_2 = 41;
  char* entity_0;
  char entity_1[entity_2] = "";
  entity_1 = NULL;
  memset(entity_1, 's', entity_2-1);
  entity_1[entity_2-1]='';
  entity_0 = (char*)malloc(15*sizeof(char));
  entity_0[15-1]='';
  memcpy(entity_0, entity_1, entity_2*sizeof(char));
}