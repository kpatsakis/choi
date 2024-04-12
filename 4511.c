void fun()
{
  int entity_0 = 94;
  char entity_1[85] = "";
  entity_1 = NULL;
  char* entity_8;
  memset(entity_1, 'k', 85-1);
  entity_1[85-1]='';
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  memcpy(entity_8, entity_1, 85*sizeof(char));
}