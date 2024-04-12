void fun()
{
  int entity_0 = 54;
  char entity_3[72] = "";
  entity_3 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[entity_0-1]='';
  memset(entity_3, 'T', 72-1);
  entity_3[72-1]='';
  entity_0 = 17;
  memcpy(entity_4, entity_3, 72*sizeof(char));
}