void fun()
{
  int entity_4 = 35;
  char* entity_2;
  char entity_0[53] = "";
  entity_0 = NULL;
  memset(entity_0, 'h', 53-1);
  entity_0[53-1]='';
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  memcpy(entity_2, entity_0, 53*sizeof(char));
}