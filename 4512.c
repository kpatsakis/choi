void fun()
{
  int entity_2 = 64;
  char* entity_6;
  char entity_8[entity_2] = "";
  entity_8 = NULL;
  char entity_9[23] = "";
  entity_9 = NULL;
  char entity_0 = 'V';
  memset(entity_8, 'C', entity_2-1);
  entity_8[entity_2-1]='';
  entity_6 = (char*)malloc(99*sizeof(char));
  entity_6[99-1]='';
  memset(entity_9, 'z', 23-1);
  entity_9[23-1]='';
  entity_8[94] = 'l';
}