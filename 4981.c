void fun()
{
  int entity_0 = 42;
  char* entity_3;
  char entity_4[53] = "";
  entity_4 = NULL;
  entity_3 = (char*)malloc(entity_0*sizeof(char));
  entity_3[entity_0-1]='';
  memset(entity_4, 'z', 53-1);
  entity_4[53-1]='';
  memcpy(entity_3, entity_4, 53*sizeof(char));
}