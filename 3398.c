void fun()
{
  int entity_8 = 18;
  char entity_3 = 'U';
  char entity_6[11] = "";
  entity_6 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(entity_8*sizeof(char));
  entity_5[entity_8-1]='';
  memset(entity_6, 's', 11-1);
  entity_6[11-1]='';
  memcpy(entity_5, entity_6, 11*sizeof(char));
}