void fun()
{
  int entity_5 = 13;
  int entity_4 = 43;
  char entity_2[48] = "";
  entity_2 = NULL;
  char* entity_6;
  memset(entity_2, 'm', 48-1);
  entity_2[48-1]='';
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[entity_4-1]='';
  memcpy(entity_6, entity_2, 48*sizeof(char));
}