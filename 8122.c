void fun()
{
  int entity_3 = 64;
  char entity_7[80] = "";
  entity_7 = NULL;
  char* entity_0;
  char entity_1[53] = "";
  entity_1 = NULL;
  entity_0 = (char*)malloc(entity_3*sizeof(char));
  entity_0[entity_3-1]='';
  memset(entity_1, 'v', 53-1);
  entity_1[53-1]='';
  memset(entity_7, 'x', 80-1);
  entity_7[80-1]='';
  entity_3 = 90;
  memcpy(entity_0, entity_7, 80*sizeof(char));
}