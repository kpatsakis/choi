void fun()
{
  int entity_8 = 1;
  char* entity_7;
  char entity_0[98] = "";
  entity_0 = NULL;
  memset(entity_0, 'y', 98-1);
  entity_0[98-1]='';
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[entity_8-1]='';
  memcpy(entity_7, entity_0, 98*sizeof(char));
}