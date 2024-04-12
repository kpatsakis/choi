void fun()
{
  int entity_8 = 39;
  int entity_5 = 91;
  int entity_0 = 56;
  entity_0 = 10;
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(71*sizeof(char));
  entity_7[71-1]='';
  memset(entity_1, 'X', entity_0-1);
  entity_1[entity_0-1]='';
  memcpy(entity_7, entity_1, entity_0*sizeof(char));
}