void fun()
{
  int entity_8 = 98;
  char entity_0[22] = "";
  entity_0 = NULL;
  char* entity_4;
  memset(entity_0, 'c', 22-1);
  entity_0[22-1]='';
  entity_4 = (char*)malloc(entity_8*sizeof(char));
  entity_4[entity_8-1]='';
  memcpy(entity_4, entity_0, 22*sizeof(char));
}