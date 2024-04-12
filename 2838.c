void fun()
{
  int entity_0 = 57;
  entity_0 = 53;
  char entity_5[entity_0] = "";
  entity_5 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(10*sizeof(char));
  entity_7[10-1]='';
  memset(entity_5, 'd', entity_0-1);
  entity_5[entity_0-1]='';
  memcpy(entity_7, entity_5, entity_0*sizeof(char));
}