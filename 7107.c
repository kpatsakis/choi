void fun()
{
  int entity_8 = 60;
  int entity_5 = 57;
  char* entity_3;
  char entity_0[48] = "";
  entity_0 = NULL;
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[entity_8-1]='';
  memset(entity_0, 'K', 48-1);
  entity_0[48-1]='';
  memcpy(entity_3, entity_0, 48*sizeof(char));
}