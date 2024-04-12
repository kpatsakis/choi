void fun()
{
  int entity_2 = 72;
  char entity_8[20] = "";
  entity_8 = NULL;
  char* entity_3;
  memset(entity_8, 'P', 20-1);
  entity_8[20-1]='';
  entity_3 = (char*)malloc(entity_2*sizeof(char));
  entity_3[entity_2-1]='';
  memcpy(entity_3, entity_8, 20*sizeof(char));
}