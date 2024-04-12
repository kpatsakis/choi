void fun()
{
  int entity_7 = 22;
  int entity_2 = 78;
  char entity_9 = 'u';
  char entity_0[8] = "";
  entity_0 = NULL;
  char* entity_5;
  memset(entity_0, 'e', 8-1);
  entity_0[8-1]='';
  entity_5 = (char*)malloc(76*sizeof(char));
  entity_5[76-1]='';
  entity_0[entity_7] = 'B';
}