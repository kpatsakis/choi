void fun()
{
  int entity_6 = 7;
  char entity_3[77] = "";
  entity_3 = NULL;
  char entity_7[16] = "";
  entity_7 = NULL;
  char* entity_1;
  memset(entity_7, 'N', 16-1);
  entity_7[16-1]='';
  memset(entity_3, 'N', 77-1);
  entity_3[77-1]='';
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[entity_6-1]='';
  entity_6 = 80;
  strcpy(entity_1, entity_3);
}