void fun()
{
  int entity_7 = 28;
  entity_7 = 66;
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(23*sizeof(char));
  entity_0[23-1]='';
  memset(entity_3, 'J', entity_7-1);
  entity_3[entity_7-1]='';
  memcpy(entity_0, entity_3, entity_7*sizeof(char));
}