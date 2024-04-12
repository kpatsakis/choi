void fun()
{
  int entity_5 = 78;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  char* entity_0;
  memset(entity_2, 'E', entity_5-1);
  entity_2[entity_5-1]='';
  entity_0 = (char*)malloc(72*sizeof(char));
  entity_0[72-1]='';
  entity_5 = 9;
  memcpy(entity_0, entity_2, entity_5*sizeof(char));
}