void fun()
{
  int entity_8 = 4;
  char entity_0[entity_8] = "";
  entity_0 = NULL;
  char* entity_2;
  memset(entity_0, 'q', entity_8-1);
  entity_0[entity_8-1]='';
  entity_2 = (char*)malloc(2*sizeof(char));
  entity_2[2-1]='';
  memcpy(entity_2, entity_0, entity_8*sizeof(char));
}