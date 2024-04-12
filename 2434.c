void fun()
{
  int entity_0 = 66;
  char entity_7[entity_0] = "";
  entity_7 = NULL;
  char* entity_6;
  char entity_3[99] = "";
  entity_3 = NULL;
  entity_6 = (char*)malloc(84*sizeof(char));
  entity_6[84-1]='';
  memset(entity_7, 'J', entity_0-1);
  entity_7[entity_0-1]='';
  memset(entity_3, 'A', 99-1);
  entity_3[99-1]='';
  memcpy(entity_6, entity_7, entity_0*sizeof(char));
}