void fun()
{
  int entity_9 = 44;
  char entity_6[16] = "";
  entity_6 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(55*sizeof(char));
  entity_1[55-1]='';
  memset(entity_6, 'L', 16-1);
  entity_6[16-1]='';
  memcpy(entity_1, entity_6, 16*sizeof(char));
}