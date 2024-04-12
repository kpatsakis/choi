void fun()
{
  int entity_1 = 72;
  char entity_5[87] = "";
  entity_5 = NULL;
  char* entity_0;
  memset(entity_5, 'a', 87-1);
  entity_5[87-1]='';
  entity_0 = (char*)malloc(5*sizeof(char));
  entity_0[5-1]='';
  entity_5[entity_1] = 'c';
}