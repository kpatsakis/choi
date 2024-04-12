void fun()
{
  int entity_2 = 22;
  char entity_3[8] = "";
  entity_3 = NULL;
  char* entity_0;
  char entity_8 = 'U';
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[entity_2-1]='';
  memset(entity_3, 'D', 8-1);
  entity_3[8-1]='';
  memcpy(entity_0, entity_3, 8*sizeof(char));
}