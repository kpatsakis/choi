void fun()
{
  int entity_0 = 51;
  entity_0 = 58;
  char entity_4[entity_0] = "";
  entity_4 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(41*sizeof(char));
  entity_7[41-1]='';
  memset(entity_4, 'S', entity_0-1);
  entity_4[entity_0-1]='';
  memcpy(entity_7, entity_4, entity_0*sizeof(char));
}