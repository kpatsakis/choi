void fun()
{
  int entity_0 = 3;
  char entity_8[entity_0] = "";
  entity_8 = NULL;
  char* entity_6;
  memset(entity_8, 's', entity_0-1);
  entity_8[entity_0-1]='';
  entity_6 = (char*)malloc(57*sizeof(char));
  entity_6[57-1]='';
  memcpy(entity_6, entity_8, entity_0*sizeof(char));
}