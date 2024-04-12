void fun()
{
  int entity_3 = 97;
  char* entity_8;
  char entity_6[14] = "";
  entity_6 = NULL;
  memset(entity_6, 'U', 14-1);
  entity_6[14-1]='';
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[entity_3-1]='';
  memcpy(entity_8, entity_6, 14*sizeof(char));
}