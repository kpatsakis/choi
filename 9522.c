void fun()
{
  int entity_6 = 25;
  char entity_8[90] = "";
  entity_8 = NULL;
  char* entity_0;
  memset(entity_8, 'G', 90-1);
  entity_8[90-1]='';
  entity_0 = (char*)malloc(entity_6*sizeof(char));
  entity_0[entity_6-1]='';
  memcpy(entity_0, entity_8, 90*sizeof(char));
}