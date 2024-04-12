void fun()
{
  int entity_1 = 9;
  int entity_3 = 26;
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(72*sizeof(char));
  entity_8[72-1]='';
  memset(entity_0, 'b', entity_3-1);
  entity_0[entity_3-1]='';
  entity_3 = 47;
  entity_0[22] = 'Y';
}