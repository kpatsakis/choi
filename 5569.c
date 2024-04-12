void fun()
{
  int entity_0 = 47;
  char* entity_8;
  char entity_3[14] = "";
  entity_3 = NULL;
  char entity_7 = 'K';
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  memset(entity_3, 'U', 14-1);
  entity_3[14-1]='';
  strcpy(entity_8, entity_3);
}