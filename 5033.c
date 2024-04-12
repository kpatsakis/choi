void fun()
{
  int entity_6 = 29;
  char entity_0[94] = "";
  entity_0 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[entity_6-1]='';
  memset(entity_0, 'j', 94-1);
  entity_0[94-1]='';
  entity_6 = 53;
  memcpy(entity_2, entity_0, 94*sizeof(char));
}