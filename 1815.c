void fun()
{
  int entity_4 = 15;
  char entity_5[entity_4] = "";
  entity_5 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(21*sizeof(char));
  entity_0[21-1]='';
  memset(entity_5, 'e', entity_4-1);
  entity_5[entity_4-1]='';
  memcpy(entity_0, entity_5, entity_4*sizeof(char));
}