void fun()
{
  int entity_1 = 95;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  char entity_4 = 'd';
  char entity_6[52] = "";
  entity_6 = NULL;
  char* entity_3;
  memset(entity_6, 'r', 52-1);
  entity_6[52-1]='';
  memset(entity_5, 'I', entity_1-1);
  entity_5[entity_1-1]='';
  entity_3 = (char*)malloc(2*sizeof(char));
  entity_3[2-1]='';
  strcpy(entity_3, entity_5);
}