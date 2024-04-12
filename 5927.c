void fun()
{
  int entity_0 = 14;
  int entity_7 = 54;
  entity_0 = 50;
  char* entity_6;
  char entity_2[entity_0] = "";
  entity_2 = NULL;
  memset(entity_2, 'E', entity_0-1);
  entity_2[entity_0-1]='';
  entity_6 = (char*)malloc(99*sizeof(char));
  entity_6[99-1]='';
  memcpy(entity_6, entity_2, entity_0*sizeof(char));
}