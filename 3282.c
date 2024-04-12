void fun()
{
  int entity_0 = 82;
  entity_0 = 47;
  char entity_4 = 't';
  char* entity_6;
  char entity_1[100] = "";
  entity_1 = NULL;
  entity_6 = (char*)malloc(entity_0*sizeof(char));
  entity_6[entity_0-1]='';
  memset(entity_1, 'y', 100-1);
  entity_1[100-1]='';
  memcpy(entity_6, entity_1, 100*sizeof(char));
}