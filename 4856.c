void fun()
{
  int entity_0 = 40;
  char entity_1[46] = "";
  entity_1 = NULL;
  char* entity_5;
  memset(entity_1, 't', 46-1);
  entity_1[46-1]='';
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[entity_0-1]='';
  memcpy(entity_5, entity_1, 46*sizeof(char));
}