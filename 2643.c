void fun()
{
  int entity_0 = 81;
  entity_0 = 1;
  char* entity_8;
  char entity_6[entity_0] = "";
  entity_6 = NULL;
  memset(entity_6, 'p', entity_0-1);
  entity_6[entity_0-1]='';
  entity_8 = (char*)malloc(67*sizeof(char));
  entity_8[67-1]='';
  memcpy(entity_8, entity_6, entity_0*sizeof(char));
}