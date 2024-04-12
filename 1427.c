void fun()
{
  int entity_2 = 24;
  char* entity_0;
  char entity_3[2] = "";
  entity_3 = NULL;
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[entity_2-1]='';
  memset(entity_3, 'h', 2-1);
  entity_3[2-1]='';
  memcpy(entity_0, entity_3, 2*sizeof(char));
}