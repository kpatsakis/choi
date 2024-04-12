void fun()
{
  int entity_3 = 88;
  int entity_4 = 36;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(75*sizeof(char));
  entity_9[75-1]='';
  memset(entity_8, 'z', entity_3-1);
  entity_8[entity_3-1]='';
  entity_8[24] = 'Y';
}