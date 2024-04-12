void fun()
{
  int entity_3 = 84;
  char* entity_0;
  char entity_5[8] = "";
  entity_5 = NULL;
  entity_0 = (char*)malloc(entity_3*sizeof(char));
  entity_0[entity_3-1]='';
  memset(entity_5, 'A', 8-1);
  entity_5[8-1]='';
  entity_3 = 98;
  memcpy(entity_0, entity_5, 8*sizeof(char));
}