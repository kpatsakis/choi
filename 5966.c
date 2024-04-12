void fun()
{
  int entity_2 = 76;
  int entity_3 = 4;
  char* entity_4;
  char entity_0[57] = "";
  entity_0 = NULL;
  memset(entity_0, 'y', 57-1);
  entity_0[57-1]='';
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[entity_3-1]='';
  memcpy(entity_4, entity_0, 57*sizeof(char));
}