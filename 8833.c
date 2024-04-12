void fun()
{
  int entity_4 = 59;
  char* entity_8;
  char entity_0[entity_4] = "";
  entity_0 = NULL;
  entity_8 = (char*)malloc(62*sizeof(char));
  entity_8[62-1]='';
  memset(entity_0, 'h', entity_4-1);
  entity_0[entity_4-1]='';
  memcpy(entity_8, entity_0, entity_4*sizeof(char));
}