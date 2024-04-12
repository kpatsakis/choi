void fun()
{
  int entity_0 = 80;
  entity_0 = 22;
  char* entity_6;
  char entity_2[83] = "";
  entity_2 = NULL;
  entity_6 = (char*)malloc(entity_0*sizeof(char));
  entity_6[entity_0-1]='';
  memset(entity_2, 'w', 83-1);
  entity_2[83-1]='';
  memcpy(entity_6, entity_2, 83*sizeof(char));
}