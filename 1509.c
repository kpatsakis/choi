void fun()
{
  int entity_0 = 43;
  char* entity_8;
  char entity_4[entity_0] = "";
  entity_4 = NULL;
  entity_8 = (char*)malloc(3*sizeof(char));
  entity_8[3-1]='';
  memset(entity_4, 'c', entity_0-1);
  entity_4[entity_0-1]='';
  entity_4[25] = 'x';
}