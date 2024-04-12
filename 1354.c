void fun()
{
  int entity_0 = 64;
  entity_0 = 36;
  char entity_7[entity_0] = "";
  entity_7 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(67*sizeof(char));
  entity_3[67-1]='';
  memset(entity_7, 'T', entity_0-1);
  entity_7[entity_0-1]='';
  memcpy(entity_3, entity_7, entity_0*sizeof(char));
}