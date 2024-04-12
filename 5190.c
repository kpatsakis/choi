void fun()
{
  int entity_8 = 59;
  entity_8 = 65;
  char* entity_4;
  char entity_0[90] = "";
  entity_0 = NULL;
  memset(entity_0, 'l', 90-1);
  entity_0[90-1]='';
  entity_4 = (char*)malloc(entity_8*sizeof(char));
  entity_4[entity_8-1]='';
  memcpy(entity_4, entity_0, 90*sizeof(char));
}