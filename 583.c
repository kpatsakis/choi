void fun()
{
  int entity_5 = 54;
  int entity_9 = 74;
  char* entity_0;
  char entity_8[7] = "";
  entity_8 = NULL;
  memset(entity_8, 'A', 7-1);
  entity_8[7-1]='';
  entity_0 = (char*)malloc(13*sizeof(char));
  entity_0[13-1]='';
  entity_8[entity_5] = 'N';
}