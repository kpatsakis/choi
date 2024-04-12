void fun()
{
  int entity_5 = 78;
  char entity_8[67] = "";
  entity_8 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(89*sizeof(char));
  entity_1[89-1]='';
  memset(entity_8, 'G', 67-1);
  entity_8[67-1]='';
  entity_5 = 27;
  entity_8[entity_5] = 'f';
}