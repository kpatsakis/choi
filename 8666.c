void fun()
{
  int entity_5 = 32;
  char entity_8[100] = "";
  entity_8 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(entity_5*sizeof(char));
  entity_7[entity_5-1]='';
  memset(entity_8, 'k', 100-1);
  entity_8[100-1]='';
  memcpy(entity_7, entity_8, 100*sizeof(char));
}