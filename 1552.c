void fun()
{
  int entity_3 = 35;
  char entity_7[18] = "";
  entity_7 = NULL;
  char entity_4[70] = "";
  entity_4 = NULL;
  char* entity_1;
  memset(entity_7, 'q', 18-1);
  entity_7[18-1]='';
  memset(entity_4, 'g', 70-1);
  entity_4[70-1]='';
  entity_1 = (char*)malloc(entity_3*sizeof(char));
  entity_1[entity_3-1]='';
  strcpy(entity_1, entity_7);
}