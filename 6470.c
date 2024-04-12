void fun()
{
  int entity_6 = 34;
  char entity_8[56] = "";
  entity_8 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(50*sizeof(char));
  entity_0[50-1]='';
  memset(entity_8, 'T', 56-1);
  entity_8[56-1]='';
  entity_8[entity_6] = 'Q';
}