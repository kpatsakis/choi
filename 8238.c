void fun()
{
  int entity_5 = 78;
  char entity_0[25] = "";
  entity_0 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(76*sizeof(char));
  entity_4[76-1]='';
  memset(entity_0, 'I', 25-1);
  entity_0[25-1]='';
  entity_5 = 4;
  entity_0[entity_5] = 'F';
}