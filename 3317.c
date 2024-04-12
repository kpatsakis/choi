void fun()
{
  int entity_5 = 87;
  entity_5 = 53;
  char entity_2[78] = "";
  entity_2 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[entity_5-1]='';
  memset(entity_2, 't', 78-1);
  entity_2[78-1]='';
  memcpy(entity_4, entity_2, 78*sizeof(char));
}