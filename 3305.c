void fun()
{
  int entity_0 = 70;
  entity_0 = 98;
  char entity_8[51] = "";
  entity_8 = NULL;
  char* entity_1;
  char entity_2[33] = "";
  entity_2 = NULL;
  memset(entity_2, 'Z', 33-1);
  entity_2[33-1]='';
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[entity_0-1]='';
  memset(entity_8, 'r', 51-1);
  entity_8[51-1]='';
  strcpy(entity_1, entity_2);
}