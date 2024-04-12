void fun()
{
  int entity_1 = 93;
  char entity_0[94] = "";
  entity_0 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(entity_1*sizeof(char));
  entity_4[entity_1-1]='';
  memset(entity_0, 'd', 94-1);
  entity_0[94-1]='';
  memcpy(entity_4, entity_0, 94*sizeof(char));
}