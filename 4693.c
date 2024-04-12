void fun()
{
  int entity_9 = 67;
  char entity_8 = 'p';
  char entity_2[72] = "";
  entity_2 = NULL;
  char* entity_0;
  memset(entity_2, 'i', 72-1);
  entity_2[72-1]='';
  entity_0 = (char*)malloc(91*sizeof(char));
  entity_0[91-1]='';
  memcpy(entity_0, entity_2, 72*sizeof(char));
}