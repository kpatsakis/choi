void fun()
{
  int entity_6 = 34;
  int entity_2 = 41;
  char entity_0[89] = "";
  entity_0 = NULL;
  char* entity_5;
  char entity_7 = 'o';
  char entity_4[94] = "";
  entity_4 = NULL;
  memset(entity_0, 'z', 89-1);
  entity_0[89-1]='';
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[entity_2-1]='';
  memset(entity_4, 'Z', 94-1);
  entity_4[94-1]='';
  strcpy(entity_5, entity_4);
}