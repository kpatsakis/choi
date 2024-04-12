void fun()
{
  int entity_3 = 46;
  char* entity_8;
  char* entity_5;
  char entity_0[22] = "";
  entity_0 = NULL;
  char entity_1 = 'w';
  memset(entity_0, 'Z', 22-1);
  entity_0[22-1]='';
  entity_8 = (char*)malloc(3*sizeof(char));
  entity_8[3-1]='';
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[entity_3-1]='';
  memcpy(entity_5, entity_0, 22*sizeof(char));
}