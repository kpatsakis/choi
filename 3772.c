void fun()
{
  int entity_0 = 4;
  int entity_9 = 88;
  entity_0 = 41;
  char* entity_8;
  char entity_3[68] = "";
  entity_3 = NULL;
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  memset(entity_3, 'i', 68-1);
  entity_3[68-1]='';
  memcpy(entity_8, entity_3, 68*sizeof(char));
}