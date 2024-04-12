void fun()
{
  int entity_0 = 10;
  entity_0 = 26;
  char* entity_9;
  char entity_3[21] = "";
  entity_3 = NULL;
  entity_9 = (char*)malloc(entity_0*sizeof(char));
  entity_9[entity_0-1]='';
  memset(entity_3, 'G', 21-1);
  entity_3[21-1]='';
  memcpy(entity_9, entity_3, 21*sizeof(char));
}