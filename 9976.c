void fun()
{
  int entity_0 = 73;
  entity_0 = 100;
  char entity_5[31] = "";
  entity_5 = NULL;
  char* entity_8;
  memset(entity_5, 'b', 31-1);
  entity_5[31-1]='';
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  memcpy(entity_8, entity_5, 31*sizeof(char));
}