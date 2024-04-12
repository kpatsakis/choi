void fun()
{
  int entity_3 = 23;
  char entity_7[19] = "";
  entity_7 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(entity_3*sizeof(char));
  entity_6[entity_3-1]='';
  memset(entity_7, 'p', 19-1);
  entity_7[19-1]='';
  memcpy(entity_6, entity_7, 19*sizeof(char));
}