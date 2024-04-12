void fun()
{
  int entity_3 = 59;
  char entity_4[22] = "";
  entity_4 = NULL;
  char entity_6 = 'D';
  char* entity_1;
  entity_1 = (char*)malloc(entity_3*sizeof(char));
  entity_1[entity_3-1]='';
  memset(entity_4, 'K', 22-1);
  entity_4[22-1]='';
  entity_3 = 100;
  strcpy(entity_1, entity_4);
}