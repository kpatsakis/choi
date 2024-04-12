void fun()
{
  int entity_3 = 73;
  char entity_5[3] = "";
  entity_5 = NULL;
  char* entity_2;
  memset(entity_5, 'b', 3-1);
  entity_5[3-1]='';
  entity_2 = (char*)malloc(32*sizeof(char));
  entity_2[32-1]='';
  memcpy(entity_2, entity_5, 3*sizeof(char));
}