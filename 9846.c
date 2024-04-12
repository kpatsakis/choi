void fun()
{
  int entity_8 = 68;
  int entity_0 = 5;
  char* entity_1;
  char* entity_7;
  char entity_4[50] = "";
  entity_4 = NULL;
  memset(entity_4, 'N', 50-1);
  entity_4[50-1]='';
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  entity_1 = (char*)malloc(86*sizeof(char));
  entity_1[86-1]='';
  strcpy(entity_7, entity_4);
}