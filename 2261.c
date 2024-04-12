void fun()
{
  int entity_3 = 92;
  entity_3 = 51;
  char entity_8 = 'g';
  char* entity_6;
  char entity_7[41] = "";
  entity_7 = NULL;
  entity_6 = (char*)malloc(entity_3*sizeof(char));
  entity_6[entity_3-1]='';
  memset(entity_7, 'c', 41-1);
  entity_7[41-1]='';
  memcpy(entity_6, entity_7, 41*sizeof(char));
}