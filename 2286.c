void fun()
{
  int entity_8 = 56;
  char entity_7[11] = "";
  entity_7 = NULL;
  char* entity_9;
  memset(entity_7, 'B', 11-1);
  entity_7[11-1]='';
  entity_9 = (char*)malloc(26*sizeof(char));
  entity_9[26-1]='';
  memcpy(entity_9, entity_7, 11*sizeof(char));
}