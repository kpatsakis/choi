void fun()
{
  int entity_0 = 60;
  char* entity_5;
  char entity_4[entity_0] = "";
  entity_4 = NULL;
  memset(entity_4, 'n', entity_0-1);
  entity_4[entity_0-1]='';
  entity_5 = (char*)malloc(84*sizeof(char));
  entity_5[84-1]='';
  memcpy(entity_5, entity_4, entity_0*sizeof(char));
}