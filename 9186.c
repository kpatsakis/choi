void fun()
{
  int entity_1 = 66;
  char entity_0[89] = "";
  entity_0 = NULL;
  char* entity_9;
  char entity_8[7] = "";
  entity_8 = NULL;
  entity_9 = (char*)malloc(83*sizeof(char));
  entity_9[83-1]='';
  memset(entity_8, 'N', 7-1);
  entity_8[7-1]='';
  memset(entity_0, 'a', 89-1);
  entity_0[89-1]='';
  memcpy(entity_9, entity_0, 89*sizeof(char));
}