void fun()
{
  int entity_8 = 92;
  entity_8 = 58;
  char* entity_3;
  char entity_7[19] = "";
  entity_7 = NULL;
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[entity_8-1]='';
  memset(entity_7, 'x', 19-1);
  entity_7[19-1]='';
  memcpy(entity_3, entity_7, 19*sizeof(char));
}