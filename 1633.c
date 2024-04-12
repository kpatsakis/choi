void fun()
{
  int entity_5 = 10;
  char* entity_0;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  entity_0 = (char*)malloc(65*sizeof(char));
  entity_0[65-1]='';
  memset(entity_2, 'v', entity_5-1);
  entity_2[entity_5-1]='';
  memcpy(entity_0, entity_2, entity_5*sizeof(char));
}