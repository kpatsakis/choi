void fun()
{
  int entity_0 = 47;
  entity_0 = 73;
  char* entity_4;
  char entity_2[entity_0] = "";
  entity_2 = NULL;
  memset(entity_2, 'Z', entity_0-1);
  entity_2[entity_0-1]='';
  entity_4 = (char*)malloc(90*sizeof(char));
  entity_4[90-1]='';
  memcpy(entity_4, entity_2, entity_0*sizeof(char));
}