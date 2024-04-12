void fun()
{
  int entity_8 = 12;
  char entity_6[37] = "";
  entity_6 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[entity_8-1]='';
  memset(entity_6, 'o', 37-1);
  entity_6[37-1]='';
  entity_8 = 91;
  memcpy(entity_9, entity_6, 37*sizeof(char));
}