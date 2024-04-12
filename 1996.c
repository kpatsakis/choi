void fun()
{
  int entity_0 = 66;
  char entity_1 = 'n';
  char entity_2[35] = "";
  entity_2 = NULL;
  char entity_5 = 'C';
  char* entity_9;
  char entity_8[79] = "";
  entity_8 = NULL;
  memset(entity_8, 'T', 79-1);
  entity_8[79-1]='';
  entity_9 = (char*)malloc(entity_0*sizeof(char));
  entity_9[entity_0-1]='';
  memset(entity_2, 'V', 35-1);
  entity_2[35-1]='';
  memcpy(entity_9, entity_8, 79*sizeof(char));
}