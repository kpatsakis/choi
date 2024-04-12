void fun()
{
  int entity_0 = 57;
  entity_0 = 98;
  char entity_9[21] = "";
  entity_9 = NULL;
  char* entity_7;
  char entity_8 = 'w';
  memset(entity_9, 'k', 21-1);
  entity_9[21-1]='';
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  memcpy(entity_7, entity_9, 21*sizeof(char));
}