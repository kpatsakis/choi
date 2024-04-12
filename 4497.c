void fun()
{
  int entity_3 = 46;
  char* entity_8;
  char entity_6[93] = "";
  entity_6 = NULL;
  entity_8 = (char*)malloc(99*sizeof(char));
  entity_8[99-1]='';
  memset(entity_6, 'W', 93-1);
  entity_6[93-1]='';
  memcpy(entity_8, entity_6, 93*sizeof(char));
}