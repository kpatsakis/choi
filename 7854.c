void fun()
{
  int entity_6 = 64;
  char entity_9[19] = "";
  entity_9 = NULL;
  char* entity_3;
  memset(entity_9, 'n', 19-1);
  entity_9[19-1]='';
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[entity_6-1]='';
  entity_6 = 6;
  memcpy(entity_3, entity_9, 19*sizeof(char));
}