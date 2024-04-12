void fun()
{
  int entity_0 = 41;
  int entity_9 = 67;
  char entity_3[84] = "";
  entity_3 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  memset(entity_3, 'e', 84-1);
  entity_3[84-1]='';
  memcpy(entity_8, entity_3, 84*sizeof(char));
}