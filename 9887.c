void fun()
{
  int entity_1 = 80;
  char entity_0[16] = "";
  entity_0 = NULL;
  char* entity_7;
  char* entity_3;
  char entity_2[51] = "";
  entity_2 = NULL;
  memset(entity_0, 'q', 16-1);
  entity_0[16-1]='';
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  entity_3 = (char*)malloc(81*sizeof(char));
  entity_3[81-1]='';
  memset(entity_2, 'S', 51-1);
  entity_2[51-1]='';
  strcpy(entity_7, entity_2);
}