void fun()
{
  int entity_0 = 73;
  char entity_3[6] = "";
  entity_3 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[entity_0-1]='';
  memset(entity_3, 'v', 6-1);
  entity_3[6-1]='';
  entity_0 = 29;
  memcpy(entity_5, entity_3, 6*sizeof(char));
}