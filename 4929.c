void fun()
{
  int entity_3 = 52;
  char* entity_1;
  char entity_0[47] = "";
  entity_0 = NULL;
  entity_1 = (char*)malloc(58*sizeof(char));
  entity_1[58-1]='';
  memset(entity_0, 'b', 47-1);
  entity_0[47-1]='';
  memcpy(entity_1, entity_0, 47*sizeof(char));
}