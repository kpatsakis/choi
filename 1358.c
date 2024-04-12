void fun()
{
  int entity_8 = 60;
  entity_8 = 60;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  char entity_6 = 'y';
  char* entity_0;
  entity_0 = (char*)malloc(10*sizeof(char));
  entity_0[10-1]='';
  memset(entity_7, 'G', entity_8-1);
  entity_7[entity_8-1]='';
  entity_7[77] = 'x';
}