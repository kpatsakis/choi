void fun()
{
  int entity_6 = 57;
  char entity_1[19] = "";
  entity_1 = NULL;
  char* entity_9;
  char entity_8[19] = "";
  entity_8 = NULL;
  memset(entity_1, 'Z', 19-1);
  entity_1[19-1]='';
  memset(entity_8, 'Y', 19-1);
  entity_8[19-1]='';
  entity_9 = (char*)malloc(31*sizeof(char));
  entity_9[31-1]='';
  entity_8[entity_6] = 'n';
}