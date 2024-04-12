void fun()
{
  int entity_7 = 46;
  char* entity_0;
  char entity_1[94] = "";
  entity_1 = NULL;
  memset(entity_1, 'G', 94-1);
  entity_1[94-1]='';
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[entity_7-1]='';
  entity_7 = 47;
  memcpy(entity_0, entity_1, 94*sizeof(char));
}