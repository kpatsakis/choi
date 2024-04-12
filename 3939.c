void fun()
{
  int entity_7 = 90;
  entity_7 = 1;
  char* entity_0;
  char entity_8[100] = "";
  entity_8 = NULL;
  memset(entity_8, 'C', 100-1);
  entity_8[100-1]='';
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[entity_7-1]='';
  memcpy(entity_0, entity_8, 100*sizeof(char));
}