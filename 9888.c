void fun()
{
  int entity_0 = 18;
  char* entity_3;
  char entity_8[71] = "";
  entity_8 = NULL;
  memset(entity_8, 'F', 71-1);
  entity_8[71-1]='';
  entity_3 = (char*)malloc(entity_0*sizeof(char));
  entity_3[entity_0-1]='';
  entity_0 = 57;
  memcpy(entity_3, entity_8, 71*sizeof(char));
}