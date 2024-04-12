void fun()
{
  int entity_0 = 91;
  char* entity_7;
  char entity_8[entity_0] = "";
  entity_8 = NULL;
  memset(entity_8, 'j', entity_0-1);
  entity_8[entity_0-1]='';
  entity_7 = (char*)malloc(94*sizeof(char));
  entity_7[94-1]='';
  memcpy(entity_7, entity_8, entity_0*sizeof(char));
}