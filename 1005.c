void fun()
{
  int entity_5 = 66;
  entity_5 = 76;
  char entity_2[79] = "";
  entity_2 = NULL;
  char* entity_0;
  memset(entity_2, 's', 79-1);
  entity_2[79-1]='';
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[entity_5-1]='';
  memcpy(entity_0, entity_2, 79*sizeof(char));
}