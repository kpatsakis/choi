void fun()
{
  int entity_2 = 26;
  int entity_8 = 51;
  char entity_1[82] = "";
  entity_1 = NULL;
  char* entity_5;
  char entity_0[29] = "";
  entity_0 = NULL;
  memset(entity_0, 'b', 29-1);
  entity_0[29-1]='';
  entity_5 = (char*)malloc(entity_8*sizeof(char));
  entity_5[entity_8-1]='';
  memset(entity_1, 'a', 82-1);
  entity_1[82-1]='';
  strcpy(entity_5, entity_0);
}