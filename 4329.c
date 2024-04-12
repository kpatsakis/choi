void fun()
{
  int entity_3 = 50;
  char* entity_0;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  memset(entity_1, 'x', entity_3-1);
  entity_1[entity_3-1]='';
  entity_0 = (char*)malloc(12*sizeof(char));
  entity_0[12-1]='';
  entity_3 = 48;
  entity_1[51] = 'a';
}