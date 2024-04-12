void fun()
{
  int entity_4 = 15;
  char* entity_1;
  char entity_0[75] = "";
  entity_0 = NULL;
  memset(entity_0, 'S', 75-1);
  entity_0[75-1]='';
  entity_1 = (char*)malloc(entity_4*sizeof(char));
  entity_1[entity_4-1]='';
  memcpy(entity_1, entity_0, 75*sizeof(char));
}