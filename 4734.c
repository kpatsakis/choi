void fun()
{
  int entity_0 = 33;
  entity_0 = 64;
  char entity_5[entity_0] = "";
  entity_5 = NULL;
  char* entity_3;
  memset(entity_5, 'n', entity_0-1);
  entity_5[entity_0-1]='';
  entity_3 = (char*)malloc(62*sizeof(char));
  entity_3[62-1]='';
  memcpy(entity_3, entity_5, entity_0*sizeof(char));
}