void fun()
{
  int entity_3 = 28;
  char* entity_1;
  char entity_8[46] = "";
  entity_8 = NULL;
  memset(entity_8, 'p', 46-1);
  entity_8[46-1]='';
  entity_1 = (char*)malloc(entity_3*sizeof(char));
  entity_1[entity_3-1]='';
  entity_3 = 39;
  memcpy(entity_1, entity_8, 46*sizeof(char));
}