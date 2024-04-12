void fun()
{
  int entity_0 = 39;
  char entity_2[entity_0] = "";
  entity_2 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(18*sizeof(char));
  entity_5[18-1]='';
  memset(entity_2, 'l', entity_0-1);
  entity_2[entity_0-1]='';
  memcpy(entity_5, entity_2, entity_0*sizeof(char));
}