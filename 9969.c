void fun()
{
  int entity_3 = 18;
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(76*sizeof(char));
  entity_5[76-1]='';
  memset(entity_0, 'C', entity_3-1);
  entity_0[entity_3-1]='';
  entity_0[36] = 'y';
}