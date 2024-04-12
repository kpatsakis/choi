void fun()
{
  int entity_6 = 16;
  char* entity_0;
  char entity_2[98] = "";
  entity_2 = NULL;
  entity_0 = (char*)malloc(entity_6*sizeof(char));
  entity_0[entity_6-1]='';
  memset(entity_2, 'j', 98-1);
  entity_2[98-1]='';
  entity_6 = 74;
  memcpy(entity_0, entity_2, 98*sizeof(char));
}