void fun()
{
  int entity_0 = 31;
  char* entity_8;
  char entity_7[67] = "";
  entity_7 = NULL;
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  memset(entity_7, 'p', 67-1);
  entity_7[67-1]='';
  entity_0 = 52;
  memcpy(entity_8, entity_7, 67*sizeof(char));
}