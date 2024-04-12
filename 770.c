void fun()
{
  int entity_0 = 58;
  char* entity_4;
  char entity_5[16] = "";
  entity_5 = NULL;
  memset(entity_5, 'k', 16-1);
  entity_5[16-1]='';
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[entity_0-1]='';
  memcpy(entity_4, entity_5, 16*sizeof(char));
}