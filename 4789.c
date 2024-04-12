void fun()
{
  int entity_4 = 82;
  char* entity_0;
  char entity_7[79] = "";
  entity_7 = NULL;
  memset(entity_7, 'e', 79-1);
  entity_7[79-1]='';
  entity_0 = (char*)malloc(99*sizeof(char));
  entity_0[99-1]='';
  memcpy(entity_0, entity_7, 79*sizeof(char));
}