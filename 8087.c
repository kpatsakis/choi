void fun()
{
  int entity_3 = 18;
  char* entity_9;
  char entity_8[100] = "";
  entity_8 = NULL;
  entity_9 = (char*)malloc(entity_3*sizeof(char));
  entity_9[entity_3-1]='';
  memset(entity_8, 'o', 100-1);
  entity_8[100-1]='';
  entity_3 = 55;
  memcpy(entity_9, entity_8, 100*sizeof(char));
}