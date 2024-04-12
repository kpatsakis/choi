void fun()
{
  int entity_0 = 43;
  char entity_2[78] = "";
  entity_2 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[entity_0-1]='';
  memset(entity_2, 'x', 78-1);
  entity_2[78-1]='';
  entity_0 = 40;
  memcpy(entity_4, entity_2, 78*sizeof(char));
}