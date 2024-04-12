void fun()
{
  int entity_0 = 91;
  int entity_7 = 25;
  char entity_1 = 'C';
  char* entity_5;
  char entity_6[entity_0] = "";
  entity_6 = NULL;
  memset(entity_6, 'h', entity_0-1);
  entity_6[entity_0-1]='';
  entity_5 = (char*)malloc(73*sizeof(char));
  entity_5[73-1]='';
  memcpy(entity_5, entity_6, entity_0*sizeof(char));
}