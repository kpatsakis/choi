void fun()
{
  int entity_6 = 92;
  entity_6 = 86;
  char* entity_1;
  char entity_0[entity_6] = "";
  entity_0 = NULL;
  char entity_8[51] = "";
  entity_8 = NULL;
  memset(entity_8, 'c', 51-1);
  entity_8[51-1]='';
  entity_1 = (char*)malloc(18*sizeof(char));
  entity_1[18-1]='';
  memset(entity_0, 'C', entity_6-1);
  entity_0[entity_6-1]='';
  entity_0[16] = 'i';
}