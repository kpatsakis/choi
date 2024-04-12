void fun()
{
  int entity_0 = 57;
  char entity_8[entity_0] = "";
  entity_8 = NULL;
  char* entity_3;
  memset(entity_8, 'b', entity_0-1);
  entity_8[entity_0-1]='';
  entity_3 = (char*)malloc(74*sizeof(char));
  entity_3[74-1]='';
  memcpy(entity_3, entity_8, entity_0*sizeof(char));
}