void fun()
{
  int entity_0 = 3;
  char* entity_1;
  char entity_5[10] = "";
  entity_5 = NULL;
  memset(entity_5, 'j', 10-1);
  entity_5[10-1]='';
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[entity_0-1]='';
  memcpy(entity_1, entity_5, 10*sizeof(char));
}