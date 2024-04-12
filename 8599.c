void fun()
{
  int entity_4 = 98;
  entity_4 = 22;
  char* entity_0;
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  memset(entity_2, 'c', entity_4-1);
  entity_2[entity_4-1]='';
  entity_0 = (char*)malloc(66*sizeof(char));
  entity_0[66-1]='';
  memcpy(entity_0, entity_2, entity_4*sizeof(char));
}