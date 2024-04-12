void fun()
{
  int entity_4 = 71;
  char entity_0[14] = "";
  entity_0 = NULL;
  char* entity_1;
  memset(entity_0, 'r', 14-1);
  entity_0[14-1]='';
  entity_1 = (char*)malloc(41*sizeof(char));
  entity_1[41-1]='';
  memcpy(entity_1, entity_0, 14*sizeof(char));
}