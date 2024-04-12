void fun()
{
  int entity_4 = 56;
  char* entity_9;
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  char entity_0[29] = "";
  entity_0 = NULL;
  memset(entity_0, 'a', 29-1);
  entity_0[29-1]='';
  entity_9 = (char*)malloc(4*sizeof(char));
  entity_9[4-1]='';
  memset(entity_3, 'F', entity_4-1);
  entity_3[entity_4-1]='';
  entity_4 = 23;
  memcpy(entity_9, entity_3, entity_4*sizeof(char));
}