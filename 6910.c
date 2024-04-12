void fun()
{
  int entity_3 = 99;
  char* entity_1;
  char entity_5[22] = "";
  entity_5 = NULL;
  entity_1 = (char*)malloc(entity_3*sizeof(char));
  entity_1[entity_3-1]='';
  memset(entity_5, 'x', 22-1);
  entity_5[22-1]='';
  memcpy(entity_1, entity_5, 22*sizeof(char));
}