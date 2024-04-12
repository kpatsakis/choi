void fun()
{
  int entity_3 = 50;
  entity_3 = 36;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  char* entity_0;
  memset(entity_6, 'T', entity_3-1);
  entity_6[entity_3-1]='';
  entity_0 = (char*)malloc(66*sizeof(char));
  entity_0[66-1]='';
  entity_6[77] = 'F';
}