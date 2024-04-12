void fun()
{
  int entity_3 = 27;
  char* entity_0;
  char entity_5[20] = "";
  entity_5 = NULL;
  entity_0 = (char*)malloc(entity_3*sizeof(char));
  entity_0[entity_3-1]='';
  memset(entity_5, 's', 20-1);
  entity_5[20-1]='';
  memcpy(entity_0, entity_5, 20*sizeof(char));
}