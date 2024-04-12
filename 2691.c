void fun()
{
  int entity_4 = 87;
  entity_4 = 9;
  char* entity_0;
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  memset(entity_7, 'g', entity_4-1);
  entity_7[entity_4-1]='';
  entity_0 = (char*)malloc(20*sizeof(char));
  entity_0[20-1]='';
  memcpy(entity_0, entity_7, entity_4*sizeof(char));
}