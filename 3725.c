void fun()
{
  int entity_5 = 56;
  char entity_3[79] = "";
  entity_3 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[entity_5-1]='';
  memset(entity_3, 'd', 79-1);
  entity_3[79-1]='';
  memcpy(entity_4, entity_3, 79*sizeof(char));
}