void fun()
{
  int entity_6 = 56;
  entity_6 = 46;
  char entity_2[20] = "";
  entity_2 = NULL;
  char* entity_0;
  memset(entity_2, 'M', 20-1);
  entity_2[20-1]='';
  entity_0 = (char*)malloc(entity_6*sizeof(char));
  entity_0[entity_6-1]='';
  memcpy(entity_0, entity_2, 20*sizeof(char));
}