void fun()
{
  int entity_0 = 29;
  entity_0 = 12;
  char* entity_8;
  char entity_2[entity_0] = "";
  entity_2 = NULL;
  memset(entity_2, 'm', entity_0-1);
  entity_2[entity_0-1]='';
  entity_8 = (char*)malloc(10*sizeof(char));
  entity_8[10-1]='';
  memcpy(entity_8, entity_2, entity_0*sizeof(char));
}