void fun()
{
  int entity_6 = 76;
  char entity_3[70] = "";
  entity_3 = NULL;
  char entity_9[50] = "";
  entity_9 = NULL;
  char* entity_2;
  char* entity_4;
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[entity_6-1]='';
  entity_4 = (char*)malloc(59*sizeof(char));
  entity_4[59-1]='';
  memset(entity_3, 'k', 70-1);
  entity_3[70-1]='';
  memset(entity_9, 'D', 50-1);
  entity_9[50-1]='';
  entity_6 = 28;
  strcpy(entity_2, entity_3);
}