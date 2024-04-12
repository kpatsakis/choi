void fun()
{
  int entity_0 = 18;
  entity_0 = 37;
  char entity_5[19] = "";
  entity_5 = NULL;
  char entity_6 = 'z';
  char* entity_1;
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[entity_0-1]='';
  memset(entity_5, 'B', 19-1);
  entity_5[19-1]='';
  memcpy(entity_1, entity_5, 19*sizeof(char));
}