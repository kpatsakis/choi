void fun()
{
  int entity_2 = 33;
  char entity_4[19] = "";
  entity_4 = NULL;
  char* entity_0;
  memset(entity_4, 'p', 19-1);
  entity_4[19-1]='';
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[entity_2-1]='';
  memcpy(entity_0, entity_4, 19*sizeof(char));
}