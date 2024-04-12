void fun()
{
  int entity_3 = 41;
  char* entity_0;
  char entity_5[20] = "";
  entity_5 = NULL;
  char entity_2[79] = "";
  entity_2 = NULL;
  memset(entity_5, 'X', 20-1);
  entity_5[20-1]='';
  memset(entity_2, 'S', 79-1);
  entity_2[79-1]='';
  entity_0 = (char*)malloc(entity_3*sizeof(char));
  entity_0[entity_3-1]='';
  memcpy(entity_0, entity_2, 79*sizeof(char));
}