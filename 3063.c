void fun()
{
  int entity_0 = 48;
  char entity_2[14] = "";
  entity_2 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[entity_0-1]='';
  memset(entity_2, 't', 14-1);
  entity_2[14-1]='';
  entity_0 = 84;
  memcpy(entity_4, entity_2, 14*sizeof(char));
}