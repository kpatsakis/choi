void fun()
{
  int entity_6 = 13;
  int entity_0 = 44;
  char* entity_1;
  char entity_7[entity_0] = "";
  entity_7 = NULL;
  entity_1 = (char*)malloc(99*sizeof(char));
  entity_1[99-1]='';
  memset(entity_7, 'E', entity_0-1);
  entity_7[entity_0-1]='';
  memcpy(entity_1, entity_7, entity_0*sizeof(char));
}