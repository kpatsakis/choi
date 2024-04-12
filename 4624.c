void fun()
{
  int entity_0 = 60;
  char entity_6[2] = "";
  entity_6 = NULL;
  char* entity_1;
  char entity_2[59] = "";
  entity_2 = NULL;
  char entity_7[81] = "";
  entity_7 = NULL;
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[entity_0-1]='';
  memset(entity_6, 'r', 2-1);
  entity_6[2-1]='';
  memset(entity_2, 'u', 59-1);
  entity_2[59-1]='';
  memset(entity_7, 's', 81-1);
  entity_7[81-1]='';
  strcpy(entity_1, entity_7);
}